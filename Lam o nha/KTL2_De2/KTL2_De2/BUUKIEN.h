#pragma once
#include "DICHVU.h"

class BUUKIEN : public DICHVU
{
private:
	float trongLuong;
	int phiVanChuyen;
public:
	float tienPhaiTra();
	void nhapTT();
	void xuatTT();

	float get_trongLuong()
	{
		return trongLuong;
	}
};

float BUUKIEN::tienPhaiTra()
{
	if (trongLuong >= 3)
		phiVanChuyen = (donGia * soLuong)*10/100;
	else phiVanChuyen = (donGia * soLuong) * 5 / 100;
	return (float)(donGia * soLuong + phiVanChuyen);
}

void BUUKIEN::nhapTT()
{
	DICHVU::nhapTT();
	do
	{
		cout << "-Nhap trong luong:";
		cin >> trongLuong;
		if (trongLuong <= 0) cout << "\tGia Tri Khong Hop Le!\n";
	} while (trongLuong <= 0);
}

void BUUKIEN::xuatTT()
{
	DICHVU::xuatTT();
	cout << "\t" << setw(15) << left << "Trong luong" << ":" << trongLuong << "kg" << endl;
	cout << "\t" << setw(15) << left << "Tien Phai Tra" << ":" << tienPhaiTra() << endl;
}