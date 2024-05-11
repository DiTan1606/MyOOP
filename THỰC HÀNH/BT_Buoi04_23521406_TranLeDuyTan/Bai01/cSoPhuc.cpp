#include "cSoPhuc.h"


cSoPhuc::cSoPhuc() {}
cSoPhuc::cSoPhuc(float thuc, float ao) : thuc(thuc), ao(ao) {}

cSoPhuc cSoPhuc::operator+(const cSoPhuc& other) const {
	return cSoPhuc(thuc + other.thuc, ao + other.ao);
}
cSoPhuc operator+(const cSoPhuc& sp, float other) {
	return cSoPhuc(sp.thuc + other, sp.ao);
}
cSoPhuc operator+(float other, const cSoPhuc& sp) {
	return sp + other;
}

cSoPhuc cSoPhuc::operator-(const cSoPhuc& other) const {
	return cSoPhuc(thuc - other.thuc, ao - other.ao);
}
cSoPhuc operator-(const cSoPhuc& sp, float other) {
	return cSoPhuc(sp.thuc - other, sp.ao);
}
cSoPhuc operator-(float other, const cSoPhuc& sp) {
	return cSoPhuc(other - sp.thuc, -sp.ao);
}

cSoPhuc cSoPhuc::operator*(const cSoPhuc& other) const {
	return cSoPhuc(thuc * other.thuc - ao * other.ao, thuc * other.ao + ao * other.thuc);
}
cSoPhuc operator*(const cSoPhuc& sp, float other) {
	return cSoPhuc(sp.thuc * other, sp.ao * other);
}
cSoPhuc operator*(float other, const cSoPhuc& sp) {
	return sp * other;
}

cSoPhuc cSoPhuc::operator/(const cSoPhuc& other) const {
	float divisor = other.thuc * other.thuc + other.ao * other.ao;
	float resultThuc = (thuc * other.thuc + ao * other.ao) / divisor;
	float resultAo = (ao * other.thuc - thuc * other.ao) / divisor;
	return cSoPhuc(resultThuc, resultAo);
}
cSoPhuc operator/(const cSoPhuc& sp, float other) {
	if (other == 0) {
		cerr << "Error: Division by zero" << endl;
		return cSoPhuc();
	}
	return cSoPhuc(sp.thuc / other, sp.ao / other);
}
cSoPhuc operator/(float other, const cSoPhuc& sp) {
	if (sp == 0) {
		cerr << "Error: Division by zero" << endl;
		return cSoPhuc();
	}
	double denominator = sp.thuc * sp.thuc + sp.ao * sp.ao;
	cSoPhuc inverse(sp.thuc / denominator, -sp.ao / denominator);
	return other * inverse;
}

bool cSoPhuc::operator==(const cSoPhuc& other) {
	return (fabs(thuc - other.thuc) < 1e-9 && fabs(ao - other.ao) < 1e-9);
}
bool operator==(const cSoPhuc& sp, float other) {
	if (sp.ao == 0) {
		if (sp.thuc == other) {
			return true;
		}
	}
	else {
		return false;
	}
}
bool operator==(float other, const cSoPhuc& sp) {
	if (sp.ao == 0) {
		if (sp.thuc == other) {
			return true;
		}
	}
	else {
		return false;
	}
}

bool cSoPhuc::operator!=(const cSoPhuc& sp) {
	return !(*this == sp);
}
bool operator!=(const cSoPhuc& sp, float other) {
	return !(sp == other);
}
bool operator!=(float other, const cSoPhuc& sp) {
	return !(sp == other);
}

ostream& operator<<(ostream& os, const cSoPhuc& obj) {
	if (obj.thuc == 0) {
		if (obj.ao == 0) {
			os << 0;
		}
		else if (obj.ao > 0) {
			if (obj.ao == 1) {
				os << "i";
			}
			else {
				os << obj.ao << "i";
			}
		}
		else if (obj.ao < 0) {
			if (obj.ao == -1) {
				os << "-i";
			}
			else {
				os << "(" << obj.ao << "i)";
			}
		}
	}

	else if (obj.thuc != 0) {
		if (obj.ao == 0) {
			os << obj.thuc;
		}
		else if (obj.ao < 0) {
			if (obj.ao == -1) {
				os << "(" << obj.thuc << " - i" << ")";
			}
			else {
				os << "(" << obj.thuc << " - " << abs(obj.ao) << "i" << ")";
			}
		}
		else if (obj.ao > 0) {
			if (obj.ao == 1) {
				os << "(" << obj.thuc << "+ i" << ")";
			}
			else {
				os << "(" << obj.thuc << " + " << abs(obj.ao) << "i" << ")";
			}
		}
	}
	return os;
}

istream& operator>>(istream& is, cSoPhuc& sp) {
	string sophuc;
	getline(cin, sophuc);
	sophuc.erase(remove_if(sophuc.begin(), sophuc.end(), [](char ch) {return ch == ' '; }), sophuc.end());

	size_t posI = sophuc.find('i');
	size_t posTru = sophuc.find('-');

	if (posI != string::npos) {
		if (posTru == 0) {
			string str = sophuc.substr(1);

			size_t posplus = str.find('+');
			size_t posmin = str.find('-');
			size_t pos = (posplus != string::npos) ? posplus : posmin;

			if (pos != string::npos) {
				string strTruoc = str.substr(0, pos);
				string strSau = str.substr(pos);

				if (strTruoc.find('i') != string::npos) {
					if (strTruoc == "i") {
						sp.ao = -1;
					}
					else {
						sp.ao = -stod(strTruoc);
					}

					if (strSau[0] == '-') {
						sp.thuc = -stod(strSau.substr(1));
					}
					else {
						sp.thuc = stod(strSau);
					}
				}
				else {
					sp.thuc = -stod(strTruoc);
					if (strSau == "+i") {
						sp.ao = 1;
					}
					else if (strSau == "-i") {
						sp.ao = -1;
					}
					else if (strSau[0] == '-') {
						sp.ao = -stod(strSau.substr(1));
					}
					else {
						sp.ao = stod(strSau);
					}
				}
			}
			else {
				if (str == "i") {
					sp.thuc = 0;
					sp.ao = -1;
				}
				else {
					sp.thuc = 0;
					sp.ao = -stod(str);
				}
			}
		}
		else {
			string str = sophuc;
			size_t posplus = str.find('+');
			size_t posmin = str.find('-');
			size_t pos = (posplus != string::npos) ? posplus : posmin;

			if (pos != string::npos) {
				string strTruoc = str.substr(0, pos);
				string strSau = str.substr(pos);

				if (strTruoc.find('i') != string::npos) {
					if (strTruoc == "i") {
						sp.ao = 1;
					}
					else {
						sp.ao = stod(strTruoc);
					}

					if (strSau[0] == '-') {
						sp.thuc = -stod(strSau.substr(1));
					}
					else {
						sp.thuc = stod(strSau);
					}
				}
				else {
					sp.thuc = stod(strTruoc);
					if (strSau == "+i") {
						sp.ao = 1;
					}
					else if (strSau == "-i") {
						sp.ao = -1;
					}
					else if (strSau[0] == '-') {
						sp.ao = -stod(strSau.substr(1));
					}
					else {
						sp.ao = stod(strSau);
					}
				}
			}
			else {
				if (str == "i") {
					sp.thuc = 0;
					sp.ao = 1;
				}
				else {
					sp.thuc = 0;
					sp.ao = stod(str);
				}
			}
		}
	}
	else {
		double result = 0;
		char op = '+';
		istringstream iss(sophuc);

		while (iss) {
			double num;
			char nextOp;

			if (!(iss >> num)) break;

			switch (op) {
			case '+':
				result += num;
				break;
			case '-':
				result -= num;
				break;
			case '*':
				result *= num;
				break;
			case '/':
				result /= num;
				break;
			}

			if (!(iss >> nextOp)) break;
			op = nextOp;
		}

		sp.thuc = result;
		sp.ao = 0;
	}
	return is;
}