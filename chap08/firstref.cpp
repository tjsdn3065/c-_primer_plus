#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;
	cout << rats << endl;
	cout << rodents << endl;
	rodents++;
	cout << rats << endl;
	cout << rodents << endl;
	cout << &rats << endl;
	cout << &rodents << endl;
	return 0;
}