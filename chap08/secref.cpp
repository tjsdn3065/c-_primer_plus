#include<iostream>
int main()
{
	using namespace std;
	int rats = 101;
	int& rodents = rats;
	cout << rats;
	cout << rodents << endl;
	cout << &rats << endl;
	cout << &rodents << endl;
	int bunnies = 50;
	rodents = bunnies;
	cout << bunnies << endl;
	cout << rats << endl;
	cout << rodents << endl;
	return 0;
}