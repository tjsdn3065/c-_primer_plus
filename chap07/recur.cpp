#include<iostream>
void countdown(int n);
int main()
{
	countdown(4);
	return 0;
}

void countdown(int n)
{
	using namespace std;
	if (n > 0)
		countdown(n - 1);
}