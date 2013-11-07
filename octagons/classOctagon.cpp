// Author: Robb Gosset	Number: 11017539
// Classes to print octagons of varying sizes and styles

#ifndef IOSTREAM_H
#define IOSTREAM_H
#include <iostream>
#endif
#include "ClassOctagon.h"
; // VS bitches if this isn't here
using namespace std;

/*
** i, j and k are used as iteration variables in for loops throughout this code,
** any refrence to them not outside the decleration for a foor loop will refer to 
** the foor loop in which the refrence is made.
*/

// Public Constructors

ClassOctagon::ClassOctagon (int newSize, int newType)
{
	size = newSize;
	type = newType;
}

ClassOctagon::~ClassOctagon ()
{

}


// Public Setters and Getters for size and type

int ClassOctagon::setSize (int newSize)
{
	size = newSize;
	return 0;
}

int ClassOctagon::getSize ()
{
	return size;
}

int ClassOctagon::setType (int newType)
{
	type = newType;
	return 0;
}

int ClassOctagon::getType ()
{
	return type;
}


// Private functions for printing major sides

int ClassOctagon::printFirstSide ()
{
	// print leading spaces
	for(int j=0;j <= size;j++)
	{
		cout << " ";
	}
	// print first side
	for(int j=0;j < size;j++)
	{
		cout << "_";
	}
	return 0;
}

int ClassOctagon::printSecondSide (int sideLine)
{
	// print leading spaces
	for(int i=sideLine;i < size;i++)
	{
		cout << " ";
	}
	// print second side for this line
	cout << "/";
	// return number of characters printed
	return ((size - sideLine)+1);
}

int ClassOctagon::printSixthSide (int sideLine)
{
	// print leading spaces
	for(int i=0;i < ((size+1)-sideLine);i++)
	{
		cout << " ";
	}
	// print sixth side for this line
	cout << "\\";
	// return number of characters printed
	return ((size - sideLine)+2);
}

int ClassOctagon::printEigthSide ()
{
	// Also prints last line of sixth and seventh sides
	for(int i=0;i < size; i++)
	{
		cout << " ";
	}
	cout << "\\";
	for(int i=0;i < size;i++)
	{
		cout << "_";
	}
	cout << "/";
	return (0);
}


// Private function for printing filling

int ClassOctagon::printFilling (int space)
{

	switch (type)
	{
	case 1 : 
		// clear
		for(int i = 0;i < (size + (2*(space-1)));i ++)
		{
			cout << " ";
		}
		break;

	case 2 :
		// filled
		for(int i = 0;i < (size + (2*(space-1)));i ++)
		{
			cout << "+";
		}
		break;

	case 3 :
		// horizontal lines, toggles with lines variable, 
		// if odd print spaces, if even print lines
		if (line % 2)
			for(int i = 0;i < (size + (2*(space-1)));i ++)
			{
				cout << " ";
			}
		else
			for(int i = 0;i < (size + (2*(space-1)));i ++)
			{
				cout << "-";
			}
			break;

	case 4 :
		// vertical lines, toggles with collumn, 
		// if odd print lines, if even print spaces
		for(int i = 0;i < (size + (2*(space-1)));i ++)
		{
			if (collumn % 2)
			{
				cout << "|";
				collumn ++;
			}
			else
			{
				cout << " ";
				collumn ++;
			}
		}
		break;

	case 5 :
		// crossed lines, two nested toggles on line and collumn, 
		// prints characters according to table below:
		//
		//	line >		|		|  odd	|  even
		//	------------|-------|-------|----------
		//	collumn		|odd	|  " "	|  "-"
		//				|-------|-------|----------
		//				|even	|  "|"	|  "+"
		//	---------------------------------------

		if (line % 2)
			for(int i = 0;i < (size + (2*(space-1)));i ++)
			{
				if (collumn % 2)
				{
					cout << " ";
					collumn ++;
				}
				else
				{
					cout << "|";
					collumn ++;
				}
			}
		else
			for(int i = 0;i < (size + (2*(space-1)));i ++)
			{
				if (collumn % 2)
				{
					cout << "-";
					collumn ++;
				}
				else
				{
					cout << "+";
					collumn ++;
				}
			}
			break;

			// This should never be reached...
	default :
		cout << "ya dun goofed";
		exit (1);
	}
	return 0;
}


//Public function to print octagon

int ClassOctagon::display ()
{
	// Variables used in for loops
	int i = 0;
	int j = 0;

	printFirstSide();
	cout << endl;
	line = 1; // initialise line

	//print second filling and third sides
	for (j = 0;j < size; j++)
	{
		// print second side and leading spaces and 
		// make collumn equal to number of characters printed
		collumn = printSecondSide(j);
		// print filling, what cort is determined by type, line 
		// and collumn class variables
		printFilling((j+1));
		// Print third side
		cout << "\\" << endl;
		line++;
	}


	// print fourth filling and fifth sides
	for(i = 1;i <= size; i++)
	{
		//print fourth side
		cout << "|";
		collumn = 1; // initialise collumn for this line
		// print filling, what cort is determined by type, line 
		// and collumn class variables
		printFilling(size+1);
		//print fifth side
		cout << "|" << endl;
		line ++;
	}

	//print sixth filling and seventh sides minus last line
	for(i = size; i >= 2; i--)
	{
		// print leading spaces and sixth side and make collumn equal to
		// number of characters printed
		collumn = (printSixthSide(i));
		// print filling, what cort is determined by type, line and 
		// collumn class variables
		printFilling(i);
		//print seventh side
		cout << "/" << endl;
		line ++;
	}

	//print eigth side and last lines from sixth and seventh sides

	printEigthSide();

	// return 0 for successful completion

	return 0;
}
