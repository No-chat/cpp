#include <iostream>
using namespace std;

int main()
{
	double price;
	price = 78.5;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << price << endl;

	return 0;
}