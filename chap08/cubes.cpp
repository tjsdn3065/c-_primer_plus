#include<iostream>
double cube(double a);
double refcube(double& a);
int main()
{
	using namespace std;
	double x = 3.0;
	cout << cube(x);
	cout << x << endl;
	cout << refcube(x);
	cout << x << endl;
	return 0;
}
double cube(double a)
{
	a *= a * a;
	return a;
}
double refcube(double& a)
{
	a *= a * a;
	return a;
}