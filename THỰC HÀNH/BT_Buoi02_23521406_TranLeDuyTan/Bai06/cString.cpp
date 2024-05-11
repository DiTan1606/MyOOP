#include "cString.h"
cString::cString(){}
cString::cString(string s){
	str = s;
}
void cString::nhap() {
	getline(cin, str);
}
void cString::xuat() {
	cout << str;
}
int cString::length() {
	return str.length();
}
cString cString::noiChuoi(cString s) {
	return str + " " + s.str;
}
cString cString::daoChuoi() {
	string temp = str;
	reverse(temp.begin(), temp.end());
	return temp;
}
cString cString::vietHoa() {
	string temp = str;
	for (char& c : temp) {
		if (c >= 'a' && c <= 'z') {
			c -= 32; 
		}
	}
	return temp;
}
cString cString::vietThuong() {
	string temp = str;
	for (char& c : temp) {
		if (c >= 'A' && c <= 'Z') {
			c += 32;
		}
	}
	return temp;
}
