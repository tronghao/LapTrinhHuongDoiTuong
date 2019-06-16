#include "BUUPHAM.h"
#include "BUUKIEN.h"

int main()
{

	/*
	cout << "---BUU PHAM---\n";
	BUUPHAM a;
	a.nhapTT();
	cout << "\n\n";
	a.xuatTT();


	cout << "\n\n---BUU KIEN---\n";
	BUUKIEN b;
	b.nhapTT();
	cout << "\n\n";
	b.xuatTT();
*/
	cout << "\n\n---NHIEU BUU KIEN---\n";
	BUUKIEN c[50];
	int soLuong;
	do 
	{
		cout << "\nNhap so luong buu kien: ";
		cin >> soLuong;
		if (soLuong <= 0) cout << "\tGia Tri Khong Hop Le!\n";
	} while (soLuong <=0);

	for (int i = 0; i < soLuong; i++)
	{
		cout << "\nNhap Buu Kien " << i + 1 << ":";
		c[i].nhapTT();
	}

	for (int i = 0; i < soLuong - 1; i++)
	{
		for (int j = i + 1; j < soLuong; j++)
		{
			if (c[i].get_trongLuong() < c[j].get_trongLuong())
				swap(c[i], c[j]);
		}
	}

	cout << "\nDanh sach buu kien sap xep giam dan theo trong luong: ";
	for (int i = 0; i < soLuong; i++)
	{
		cout << "\n";
		c[i].xuatTT();
	}

	cout << "\n\n";
	system("pause");
	return 0;
}