#pragma once
#include <iostream>
#include <iomanip>
#include "SINHVIEN.h"
#include <string>
using namespace std;

class SINHVIENCQ : public SINHVIEN
{
private:
	int soTC;
	int soTienMoiTinhChi;
public:

	float tienHocPhi();
	void nhapTT();
	void xuatTT();
};

float SINHVIENCQ::tienHocPhi()
{
	if (soTC >= 20)
		soTienMoiTinhChi = 75000;
	else soTienMoiTinhChi = 70000;

	return (float)(soTC * soTienMoiTinhChi);
}

void SINHVIENCQ::nhapTT()
{
	SINHVIEN::nhapTT();

	do
	{
		cout << "-Nhap so tin chi:";
		cin >> soTC;
		if (soTC < 0) cout << "\t\tGia Tri Khong Hop Le!\n";
	} while (soTC < 0);
}

void SINHVIENCQ::xuatTT()
{
	SINHVIEN::xuatTT();
	cout << setfill('.');
	cout << "\t" << setw(25) << left << "So Tin Chi" << ":" << soTC << endl;
	cout << "\t" << setw(25) << left << "Tien Hoc Phi" << ":" << (long)tienHocPhi() << endl;
}