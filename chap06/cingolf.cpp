#include <iostream>
const int Max = 5;
int main()
{
	using namespace std;
	int golf[Max];
	int i;
	for (i = 0;i < Max;i++)
	{
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
		}
	}
	double total = 0.0;
	for (i = 0;i < Max;i++)
		total += golf[i];
	cout << Max << ' ' << total / Max << endl;
	return 0;
}