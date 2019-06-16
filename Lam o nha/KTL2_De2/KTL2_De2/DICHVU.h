#pragma once
#include "DATE.h"
#include <string>
#include <iomanip>

class DICHVU
{
protected:
	string maDV;
	string tenDV;
	float donGia;
	int soLuong;
	DATE ngayGui;
public:
	DICHVU(string ma = "0", string ten = "khong co", float dg = 0, int sl = 0, int ngay = 1, int thang = 1, int nam = 1900)
	{
		maDV = ma;
		tenDV = ten;
		donGia = dg;
		soLuong = sl;
		DATE tam(ngay, thang, nam);
		ngayGui = tam;
	}
	virtual float tienPhaiTra() = 0;
	void nhapTT();
	void xuatTT();
};

void DICHVU::nhapTT()
{
	cout << "\n-Nhap ma: ";
	fflush(stdin);
	cin >> maDV;

	cout << "-Nhap ten: ";
	fflush(stdin);
	getline(cin, tenDV);

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

	cout << "-Nhap ngay gui: \n";
	cin >> ngayGui;
}

void DICHVU::xuatTT()
{
	cout << setfill('.');
	cout << "\t" << setw(15) << left << "Ma So " << ":" << maDV << endl;
	cout << "\t" << setw(15) << left << "Ten" << ":" << tenDV << endl;
	cout << "\t" << setw(15) << left << "Don Gia" << ":" << donGia << endl;
	cout << "\t" << setw(15) << left << "So Luong" << ":" << soLuong << endl;
	cout << "\t" << setw(15) << left << "Ngay Ban" << ":" << ngayGui << endl;
}