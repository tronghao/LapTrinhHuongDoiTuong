#pragma once
#include "DATE.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class THUCPHAM
{
protected:
	string maTP;
	string tenTP;
	float donGia;
	int soLuong;
	DATE ngayBan;
public:
	virtual float tienPhaiTra() = 0;
	THUCPHAM(string _ma = "00", string _ten="Khong Co", float dg = 0, int sl = 0, int ngay = 1, int thang = 1, int nam = 1900)
	{
		maTP = _ma;
		tenTP = _ten;
		donGia = dg;
		soLuong = sl;
		DATE tam(ngay, thang, nam);
		ngayBan = tam;
	}
	void nhapTT();
	void xuatTT();
};

void THUCPHAM::nhapTT()
{
	cout << "\n-Nhap ma so: ";
	fflush(stdin);
	cin >> maTP;

	cout << "-Nhap ten: ";
	fflush(stdin);
	getline(cin, tenTP);

	do 
	{
		cout << "-Nhap don gia: ";
		cin >> donGia;
		if (donGia < 0) cout << "\tGia tri khong hop le!\n\n";
	} while (donGia < 0);

	do
	{
		cout << "-Nhap so luong: ";
		cin >> soLuong;
		if (soLuong < 0) cout << "\tGia tri khong hop le!\n\n";
	} while (soLuong < 0);

	cout << "-Nhap ngay ban: \n";
	cin >> ngayBan;
}

void THUCPHAM::xuatTT()
{
	cout << setfill('.');
	cout << "\t" << setw(15) << left << "Ma So " << ":" << maTP << endl;
	cout << "\t" << setw(15) << left << "Ten" << ":" << tenTP << endl;
	cout << "\t" << setw(15) << left << "Don Gia" << ":" << donGia << endl;
	cout << "\t" << setw(15) << left << "So Luong" << ":" << soLuong << endl;
	cout << "\t" << setw(15) << left << "Ngay Ban" << ":" << ngayBan << endl;
}