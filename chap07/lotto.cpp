//#include<iostream>
//long double probability(unsigned numbers, unsigned picks);
//int main()
//{
//	using namespace std;
//	double total, choices;
//	while ((cin >> total >> choices) and choices <= total)
//	{
//		cout << probability(total, choices) << endl;
//	}
//	cout << "Á¾·á" << endl;
//	return 0;
//}
//
//long double probability(unsigned numbers, unsigned picks)
//{
//	long double result = 1.0;
//	long double n;
//	unsigned p;
//	
//	for (n = numbers, p = picks;p > 0;n--, p--)
//		result = result * n / p;
//	return result;
//}