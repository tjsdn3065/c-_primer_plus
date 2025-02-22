#include <iostream>
#include <cmath>

struct polar
{
	double distance;
	double angle;
};
struct rect
{
	double x;
	double y;
};

polar rect_to_polar(const rect* pxy,polar* pda);
void show_polar(const polar* pda);

int main()
{
	using namespace std;
	rect rplace;
	polar pplace;

	while (cin >> rplace.x >> rplace.y)
	{
		pplace = rect_to_polar(&rplace,&pplace);
		show_polar(&pplace);
	}
	return 0;
}
polar rect_to_polar(const rect* pxy, polar* pda)
{
	using namespace std;

	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}
void show_polar(const polar* pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;
	cout << pda->distance;
	cout << pda->angle * Rad_to_deg;
}