/*
------------------------------------------------------------------------------------------------------------------------------------------
OVERALL CHANGES:
Changed spacing between lines of code (so that it is grouped in an easy-to-read format)
Omitted line "cout << x << endl;" as it was unnecessary
Added comments to specific lines in void main() for greater clarification
Added "for" loop to void main() for program to loop 30 times; requirement of assignment
------------------------------------------------------------------------------------------------------------------------------------------
*/


/*
Jason Rogers & Cody Ho - 10/12/2017 Period 3
Assignment Name : Three_Digit_Ascending_Descending_Selection
Brief Description of Assignment: Typing in a 3 digit integer and determining if it is ascending, descending or neither.
*/


// Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()


// Namespaces
using namespace std;


// Functions()
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	int x;
	int a;
	int b;
	int c;
	int y;

	for (int i = 0; i < 30; i++) { // Allows user to input 30 numbers consecutively into program. (ALTERED: req of assignment)
		cout << "Please enter any positive 3 digit number . . ." << endl; // ALTERED: added "positive" for greater clarification
		cin >> x; // User generates random 3 digit number... ex: '391'.

		a = x / 100; // Define "a" as the 100ths digit of number
		y = x / 10;
		b = y % 10; // Define "b" as 10ths digit of number 
		c = x % 10; // Define "c" as ones digit of number

		if (a > b && b > c) {
			cout << x << " is descending." << endl; // If the digits of the 3-digit number are decreasing from left to right, print "descending". (ALTERED: added "x is" to statement (req of assignment))
		}
		else if (a < b && b < c) {
			cout << x << " is ascending." << endl; // If the digits of the 3-digit number are increasing from left to right, print "ascending". (ALTERED: added "x is" to statement (req of assignment))
		}
		else {
			cout << x << " is neither." << endl; // If the digits of the 3-digit number are neither increasing or decreasing from left to right, print "neither". (ALTERED: added "x is" to statement (req of assignment))
		}

		pause(); // Pauses to see the displayed text.
	}
}


