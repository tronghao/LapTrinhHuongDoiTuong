#pragma once
#include <iostream>

using namespace std;

class DATE
{
private:
	int ngay, thang, nam;
public:
	DATE(int day = 1, int month = 1, int year = 1990)
	{
		ngay = day;
		thang = month;
		nam = year;
	}

	friend istream &operator >>(istream &input, DATE &dt);
	friend ostream &operator <<(ostream &ouput, DATE &dt);
};

istream &operator >>(istream &input, DATE &dt)
{
	do 
	{
		cout << "\tNhap ngay:";
		input >> dt.ngay;
		if (dt.ngay < 1 || dt.ngay > 31) cout << "\t\tGia Tri Khong Hop Le!\n";
	} while (dt.ngay < 1 || dt.ngay > 31);

	do
	{
		cout << "\tNhap thang:";
		input >> dt.thang;
		if (dt.thang < 1 || dt.thang >12) cout << "\t\tGia Tri Khong Hop Le!\n";
	} while (dt.thang < 1 || dt.thang >12);

	do
	{
		cout << "\tNhap nam:";
		input >> dt.nam;
		if (dt.nam < 1900) cout << "\t\tGia Tri Khong Hop Le!\n";
	} while (dt.nam < 1900);

	return input;
}

ostream &operator <<(ostream &ouput, DATE &dt)
{
	ouput << dt.ngay << "/" << dt.thang << "/" << dt.nam;
	return ouput;
}