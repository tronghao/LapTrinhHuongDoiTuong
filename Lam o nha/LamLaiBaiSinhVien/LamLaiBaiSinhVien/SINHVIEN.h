#pragma once
#include <iostream>
#include "DATE.h"
#include <iomanip>
#include <string>
using namespace std;

class SINHVIEN
{
private:
	string maSV;
	string hoTen;
	DATE namSinh;
public:
	SINHVIEN(string _ma = "000", string _ten = "No Name", int ngay = 1, int thang = 1 , int nam = 1990)
	{
		maSV = _ma;
		hoTen = _ten;

		DATE tam(ngay, thang, nam);
		namSinh = tam;
	}

	virtual float tienHocPhi() = 0;
	void nhapTT();
	void xuatTT();
};

void SINHVIEN::nhapTT()
{
	cout << "\n-Nhap ma so: ";
	fflush(stdin);
	cin >> maSV;

	cout << "-Nhap ho ten: ";
	fflush(stdin);
	getline(cin,hoTen);

	cout << "-Nhap ngay thang nam sinh: \n";
	cin >> namSinh;
}

void SINHVIEN::xuatTT()
{
	cout << setfill('.');
	cout << "\t" << setw(25) << left << "Ma So Sinh Vien"     << ":" << maSV    << endl;
	cout << "\t" << setw(25) << left << "Ho Ten Sinh Vien" << ":" << hoTen << endl;
	cout << "\t" << setw(25) << left << "Ngay thang nam sinh" << ":" << namSinh << endl;
}
