#pragma once
class cSoPhuc
{
private:
	float phanthuc;
	float phanao;
public:
	cSoPhuc();
	cSoPhuc(float, float);
	void nhap();
	void xuat();
	cSoPhuc cong(cSoPhuc);
	cSoPhuc tru(cSoPhuc);
	cSoPhuc nhan(cSoPhuc);
	cSoPhuc chia(cSoPhuc);
	//get/set
	float getPhanthuc();
	float getPhanao();
	void setPhanthuc(float);
	void setPhanao(float);
};

