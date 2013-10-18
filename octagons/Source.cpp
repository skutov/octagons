// Author: Robb Gosset	Number: 11017539
// Classes to print haxagons of varying sizes and styles

#include <iostream>
#include "classOctagon.h"

using namespace std;

void main ()
{

	int size = 0;
	int type = 0;
	int goAgain = 1;

	while(goAgain)
	{
	cout << endl<< "Please enter size of the octagon: ";
	cin >> size;
	cout << endl
		 << "Please enter type of octagon" << endl
		 << "	1: clear" << endl
		 << "	2: filled" << endl
		 << "	3: horizontal lines" << endl
		 << "	4: vertical lines" << endl
		 << "   5: crossed lines" << endl
		 << "Option: ";
	cin >> type;
	{
	Octagon newOctagon;

	newOctagon.setSize(size);
	newOctagon.setType(type);

	newOctagon.display();
	}

	cout << endl << endl 
		 << "Draw another octagon?" << endl
		 << "	1: Yes" << endl
		 << "	0: No" << endl
		 << "Option: ";
	cin >> goAgain;
	}
}