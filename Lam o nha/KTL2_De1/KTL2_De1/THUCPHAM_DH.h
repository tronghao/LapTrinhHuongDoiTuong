#pragma once
#include "THUCPHAM.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class THUCPHAM_DH : public THUCPHAM
{
private:
	int hanSD;
public:
	float tienPhaiTra();
	void nhapTT();
	void xuatTT();
};

float THUCPHAM_DH::tienPhaiTra()
{
	if (soLuong >= 5)
		return (float)((donGia * soLuong) - (donGia * soLuong)*5/100);
	else return (donGia * soLuong);
}

void THUCPHAM_DH::nhapTT()
{
	THUCPHAM::nhapTT();

	do
	{
		cout << "-Nhap han sd: ";
		cin >> hanSD;
		if (hanSD < 0) cout << "\tGia tri khong hop le!\n\n";
	} while (hanSD < 0);
}

void THUCPHAM_DH::xuatTT()
{
	THUCPHAM::xuatTT();
	cout << "\t" << setw(15) << left << "Han SD" << ":" << hanSD << " thang" << endl;
	cout << "\t" << setw(15) << left << "Tien Phai Tra" << ":" << (long)tienPhaiTra() << endl;
}