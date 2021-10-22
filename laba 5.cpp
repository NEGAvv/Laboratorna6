#include <iostream>
using namespace std;
int main()
{
	double a, x, b, c;
	float F;
	cout << "Input X" << endl;
	cin >> x;
	cout << "Input A" << endl;
	cin >> a;
	cout << "Input B" << endl;
	cin >> b;
	cout << "Input C" << endl;
	cin >> c;
	if (((x + 5) < 0) && (c == 0))
	{
		if ((a == 0) || (x == 0)) {
			F = false;
		}
		else {
			F = (1 / (a * x)) - b;
		}
		
	}
	else if ((x + 5 > 0) && (c != 0)) {
		if (x == 0) {
			F = false;
		}
		else {
			F = (x - a) / x;
		}	
	}
	else
	{
		if (c == 4) {
			F = false;
		}
		else {
			F = 10 * x / (c - 4);
		}
	}
	if (F == false) {
		cout << "error\n";
	}
	else {
		cout << "Result of F \n " << F << endl;
	}
	system("pause");
}
