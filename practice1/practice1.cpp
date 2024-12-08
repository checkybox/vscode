#include <iostream>

using namespace std;

int main()
{
	// Programming Part 3.1
	int c, thisIsAVariable, q76354, number;      // a
	int age;									 // b
	cout << "Please enter an integer: ";	     // 
	cin >> age;									 // c

	if (age != 7)								 // d
	{
		cout << "The variable number is not equal to 7" << endl << endl;
	}

	cout << "This is a C++ program" << endl << endl;		// e
	cout << "This is a C++\nprogram" << endl << endl;	    // f
	cout << "This\nis\na\nC++\nprogram" << endl << endl;    // g
	cout << "This\tis\ta\tC++\tprogram" << endl << endl;    // h

	// Programming Part 3.2
	cout << "This program calculates the product of three integer." << endl; // a
	int x, y, z = 0;	// b
	int result = 0;		// 
	cout << "Please enter three integers: "; // c
	cin >> x >> y >> z;		// d
	result = x * y * z;		// e
	cout << "The product is " << result << endl; // f

	return 0; // g
}
