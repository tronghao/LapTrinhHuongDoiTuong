#include "SINHVIENCQ.h"
#include "SINHVIENKCQ.h"

int main()
{
	SINHVIENCQ sv;

	cout << "\nNhap thong tin sinh vien chinh quy:";
	sv.nhapTT();

	cout << "\n\nThong tin sinh vien chinh quy:\n";
	sv.xuatTT();

	SINHVIENKCQ sv2;

	cout << "\nNhap thong tin sinh vien khong chinh quy:";
	sv2.nhapTT();

	cout << "\n\nThong tin sinh vien khong chinh quy:\n";
	sv2.xuatTT();

	cout << "\n\n";
	system("pause");
	return 0;
}