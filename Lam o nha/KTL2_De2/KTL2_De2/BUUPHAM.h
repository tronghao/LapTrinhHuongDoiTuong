#pragma once
#include "DICHVU.h"

class BUUPHAM : public DICHVU
{
private:
	bool loaiBP;
	int phiVanChuyen;
public:
	float tienPhaiTra();
	void nhapTT();
	void xuatTT();
};

float BUUPHAM::tienPhaiTra()
{
	if (loaiBP == 1)
		phiVanChuyen = 50000;
	else phiVanChuyen = 30000;
	return (float)(donGia * soLuong + phiVanChuyen);
}

void BUUPHAM::nhapTT()
{
	DICHVU::nhapTT();
	do 
	{
		cout << "Dich vu: 0. thu\t1. hang hoa";
		cout << "\n\tNhap loai dich vu:";
		cin >> loaiBP;
		if (loaiBP != 1 && loaiBP != 0) cout << "\tGia Tri Khong Hop Le!\n";
	} while (loaiBP !=1 && loaiBP != 0);
}

void BUUPHAM::xuatTT()
{
	DICHVU::xuatTT();
	cout << "\t" << setw(15) << left << "Loai dich vu" << ":";
	if (loaiBP == 1)
		cout << "Hang Hoa" << endl;
	else cout << "Thu" << endl;
	cout << "\t" << setw(15) << left << "Tien Phai Tra" << ":" << tienPhaiTra() << endl;
}