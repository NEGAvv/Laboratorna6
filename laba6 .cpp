#include <iostream>
#include "windows.h"
#include <iomanip>
using namespace std;
int main()
{
	float minX = 1.5, maxX = 2.5, h = 0.1, x;
	double y;
	cout << "Input minX=1.5" << endl;
	cout << "Input maxX=2.5" << endl;
	cout << "Input h=0.1" << endl;
	x = minX;
	while (x <= maxX + h / 2)
	{
		y = (x * x * x) + 3 * sin(x * x) - 3;
		cout << setw(4) << x << setw(10) << y << endl;//табуляція
		x += h;
	}
}
