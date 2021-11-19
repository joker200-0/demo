#include <iostream>
using namespace std;

int hieu(int a, int b)
{
	int sum = 0;
	sum = a+b;
	return sum;
}
int kiemtrasochanle(int a,int b)
{
	if(a %2 ==0 )
	{
		return 1;
	}
	else
	{
		return 0;
	}
	if(b %2 == 0)
	{
	   return 1;
	}else 
	{
	return 0;
	}
}
int main()
{
	int a, b ;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
	cout << "Chon phep toan (+,-) ";
	system("pause");
	return 0;
}