// First C++ code
#include <iostream>
using namespace std;

int main()
{
	int numberOfLanguages;

	cout << "Hello reader.\n"
		<< "Welcome to C++.\n";

	cout << "How many programming languages have you used?";
	cin >> numberOfLanguages;

	if (numberOfLanguages < 1)
		cout << "Read the preface. You may prefer\n"
		<< "a more elementary book by the same author.\n";
	else
		cout << "Enjoy the book.\n";

	int intVal1 = 1, intVal2 = 2;
	cout << 17 / 5 << 17.0 / 5 << intVal1 / intVal2 << endl;

	return 0;
}