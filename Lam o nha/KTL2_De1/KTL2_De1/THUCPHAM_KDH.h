#pragma once
#include "THUCPHAM.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class THUCPHAM_KDH : public THUCPHAM
{
private:
	float trongLuong;
public:
	float tienPhaiTra();
	void nhapTT();
	void xuatTT();
};

float THUCPHAM_KDH::tienPhaiTra()
{
	if (trongLuong >= 3)
		return (float)((donGia * soLuong) - (donGia * soLuong) * 10 / 100);
	else return (float)((donGia * soLuong) - (donGia * soLuong) * 5 / 100);
}

void THUCPHAM_KDH::nhapTT()
{
	THUCPHAM::nhapTT();

	do
	{
		cout << "-Nhap trong luong: ";
		cin >> trongLuong;
		if (trongLuong <= 0) cout << "\tGia tri khong hop le!\n\n";
	} while (trongLuong <= 0);
}

void THUCPHAM_KDH::xuatTT()
{
	THUCPHAM::xuatTT();
	cout << "\t" << setw(15) << left << "Trong luong" << ":" << trongLuong << " kg" << endl;
	cout << "\t" << setw(15) << left << "Tien Phai Tra" << ":" << (long)tienPhaiTra() << endl;
}