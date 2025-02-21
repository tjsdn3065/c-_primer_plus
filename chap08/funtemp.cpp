#include <iostream>
template <class Any>
void Swap(Any& a, Any& b);

int main()
{
	using namespace std;
	int i = 10;
	int j = 20;
	Swap(i, j);
	cout << i << j << endl;

	double x = 24.5;
	double y = 81.7;
	Swap(x, y);
	cout << x << y << endl;
	return 0;
}

template <class Any>
void Swap(Any& a, Any& b)
{
	Any temp;
	temp = a;
	a = b;
	b = temp;
}