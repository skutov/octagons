// Author: Robb Gosset	Number: 11017539
// Classes to print haxagons of varying sizes and styles

#include <iostream>
#include "classOctagon.h"

using std::cout;
using std::cin;
using std::endl;

/*
class Octagon
{
private:
	int size;
	int type;

public:

	Octagon::Octagon (int newSize = 0, int newType = 0)
	{
		size = newSize;
		type = newType;
	}

	Octagon::~Octagon ()
	{
	
	}

	void SetSize (int newSize = 0)
	{
		size = newSize;
		return;
	}

	void SetType (int newType = 0)
	{
		type = newType;
		return;
	}

	void display ()
	{
		int spaces = 0;
		char filling = ' ';
		int characterCount = 0;
		
		if (type != 2)
		{
			filling = ' ';
		}
		else if (type == 2)
		{
			filling = '+';
		}


		switch (type)
		{
		case 1:;
		case 2:;
		// print top side
		for(int j=0;j < size;j++)
		{
			cout << " ";
		}
		for(int j=0;j < size;j++)
		{
			cout << "_";
		}


		// Second and third sides
		for(int i = 1; i <= size; i++)
		{
			cout << endl;

			// Leading spaces
			for(int j=i;j < size;j++)
			{
				cout << " ";
			}

			// Side
			cout << "/";

			// Calculate middle spaces
			spaces = size + (i*2);

			// Print middle spaces
			for(int j=2;j < spaces;j++)
			{
				cout << filling;
			}

			// Other side
			cout << "\\";
		}

		// print bottom half ******************************************
	
		// Fourth and fifth sides

		for (int i = size; i > 1;i--)
		{
			cout << endl;

			// Leading spaces
			for(int j=i;j < size;j++)
			{
				cout << " ";
			}

			// Side
			cout << "\\";

			// Calculate middle spaces
			spaces = size + (i*2);

			// Print middle spaces
			for(int j=2;j < spaces;j++)
			{
				cout << filling;
			}

			// Other side
			cout << "/";
		}

		// print bottom side

		cout << endl;

		for(int j=1;j < size;j++)
		{
			cout << " ";
		}
		cout << "\\";
		for(int j=0;j < size;j++)
		{
			cout << "_";
		}
		cout << "/";
		break;

		case 3:

			// Horizontal Lines

					// print top side
		for(int j=0;j < size;j++)
		{
			cout << " ";
		}
		for(int j=0;j < size;j++)
		{
			cout << "_";
		}


		// Second and third sides
		for(int i = 1; i <= size; i++)
		{
			cout << endl;

			// Leading spaces
			for(int j=i;j < size;j++)
			{
				cout << " ";
			}

			// Side
			cout << "/";

			// Calculate middle spaces
			spaces = size + (i*2);

			if ( i % 2 == 1)
			{
				filling = '-';
			}
			else
			{
				filling = ' ';
			}

			// Print middle spaces
			for(int j=2;j < spaces;j++)
			{
				cout << filling;
			}

			// Other side
			cout << "\\";
		}

		// print bottom half ******************************************
	
		// Fourth and fifth sides

		for (int i = size; i > 1;i--)
		{
			cout << endl;

			// Leading spaces
			for(int j=i;j < size;j++)
			{
				cout << " ";
			}

			// Side
			cout << "\\";

			// Calculate middle spaces
			spaces = size + (i*2);

			if ( i % 2 == 0)
			{
				filling = '-';
			}
			else
			{
				filling = ' ';
			}

			// Print middle spaces
			for(int j=2;j < spaces;j++)
			{
				cout << filling;
			}

			// Other side
			cout << "/";
		}

		// print bottom side

		cout << endl;

		for(int j=1;j < size;j++)
		{
			cout << " ";
		}
		cout << "\\";
		for(int j=0;j < size;j++)
		{
			cout << "_";
		}
		cout << "/";

			break;

		case 4:

			
			// print top side
		for(int j=0;j < size;j++)
		{
			cout << " ";
			characterCount ++;
		}
		for(int j=0;j < size;j++)
		{
			cout << "_";
			characterCount++;
		}


		// Second and third sides
		for(int i = 1; i <= size; i++)
		{
			cout << endl;
			characterCount = 0;
			// Leading spaces
			for(int j=i;j < size;j++)
			{
				cout << " ";
				characterCount++;
			}

			// Side
			cout << "/";
			characterCount++;

			// Calculate middle spaces
			spaces = size + (i*2);

			// Print middle spaces
			for(int j=2;j < spaces;j++)
			{
				if (characterCount % 2 == 0)
				{
					cout << " ";
				}
				else
				{
					cout << "|";
				}
				characterCount++;
			}

			// Other side
			cout << "\\";
			characterCount++;
		}

		// print bottom half ******************************************
	
		// Fourth and fifth sides

		for (int i = size; i > 1;i--)
		{
			cout << endl;
			characterCount = 0;

			// Leading spaces
			for(int j=i;j < size;j++)
			{
				cout << " ";
				characterCount++;
			}

			// Side
			cout << "\\";
			characterCount++;

			// Calculate middle spaces
			spaces = size + (i*2);

			// Print middle spaces
			for(int j=2;j < spaces;j++)
			{
				if (characterCount % 2 == 0)
				{
					cout << " ";
				}
				else
				{
					cout << "|";
				}
				characterCount++;
			}

			// Other side
			cout << "/";
		}

		// print bottom side

		cout << endl;

		for(int j=1;j < size;j++)
		{
			cout << " ";
		}
		cout << "\\";
		for(int j=0;j < size;j++)
		{
			cout << "_";
		}
		cout << "/";

			// Vertical Lines

			break;

		default: cout << "Invalid type";
			break;
		}
	}

};
*/
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