#include "THUCPHAM_DH.h"
#include "THUCPHAM_KDH.h"

int main()
{
	THUCPHAM_DH a;
	cout << "\nThuc Pham Dong Hop:\n";
	a.nhapTT();
	a.xuatTT();

	THUCPHAM_KDH b;
	cout << "\n\nThuc Pham Khong Dong Hop:\n";
	b.nhapTT();
	b.xuatTT();

	cout << "\n\n";
	system("pause");
	return 0;
}