#pragma once
#include <iostream>
#include <iomanip>
#include "SINHVIEN.h"
#include <string>
using namespace std;

class SINHVIENKCQ : public SINHVIEN
{
private:
	int soMH;
	int soTienMoiMon = 350000;
public:

	float tienHocPhi();
	void nhapTT();
	void xuatTT();
};

float SINHVIENKCQ::tienHocPhi()
{
	return (float)(soMH * soTienMoiMon);
}

void SINHVIENKCQ::nhapTT()
{
	SINHVIEN::nhapTT();

	do
	{
		cout << "-Nhap so mon hoc:";
		cin >> soMH;
		if (soMH < 0) cout << "\t\tGia Tri Khong Hop Le!\n";
	} while (soMH < 0);
}

void SINHVIENKCQ::xuatTT()
{
	SINHVIEN::xuatTT();
	cout << setfill('.');
	cout << "\t" << setw(25) << left << "So Tin Chi"   << ":" << soMH               << endl;
	cout << "\t" << setw(25) << left << "Tien Hoc Phi" << ":" << (long)tienHocPhi() << endl;
}