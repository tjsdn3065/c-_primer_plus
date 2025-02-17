#include<iostream>
void swapr(int& a, int& b);
void swapp(int* a, int* b);
void swapv(int a, int b);
int main()
{
	using namespace std;
	int wallet1 = 3000;
	int wallet2 = 3500;
	cout << wallet1 << endl;
	cout << wallet2 << endl;
	swapr(wallet1, wallet2);
	cout << wallet1 << endl;
	cout << wallet2 << endl;
	swapp(&wallet1, &wallet2);
	cout << wallet1 << endl;
	cout << wallet2 << endl;
	swapv(wallet1, wallet2);
	cout << wallet1 << endl;
	cout << wallet2 << endl;
	return 0;
}
void swapr(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swapp(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void swapv(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}