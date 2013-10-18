#include "classOctagon.h"
#include <iostream>

using namespace std;

/*
** i, j and k are used as iteration variables in for looks throughout this code,
** any refrence to them not in the decleration for a foor loop will refer to the foor loop
** in chich the refrence is made.
*/

class Octagon
{
private:
	int size;
	int type;
	int line;
	int collumn;

	int printFirstSide ()
	{
		for(int j=0;j <= size;j++)
		{
			cout << " ";
		}
		for(int j=0;j < size;j++)
		{
			cout << "_";
		}
		return 0;
	}

	int printSecondSide (int sideLine = 0)
	{
		for(int i=0;i < ((size+1)-sideLine);i++)
		{
			cout << " ";
		}
		cout << "/";
		return ((size - sideLine)+1);
	}

	int printSixthSide (int sideLine = 0)
	{
		for(int i=0;i < ((size+1)-sideLine);i++)
		{
			cout << " ";
		}
		cout << "\\";
		return ((size - sideLine)+1);
	}

	ind printEigthSide ()
	{
	for(int i=1;i < size; i++)
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
	
	int printFilling (int space = 0)
	{

		switch (type)
		{
		case 1 : 
			for(int i = 0;i < (size + (2*(space-1)));i ++)
			{
				cout << " ";
			}
			break;

		case 2 :
			for(int i = 0;i < (size + (2*(space-1)));i ++)
			{
				cout << "+";
			}
			break;

		case 3 :
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
			if (line % 2)
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
		}
		return 0;
	}

public:

	Octagon::Octagon (int newSize = 0, int newType = 0)
	{
		size = newSize;
		type = newType;
	}

	Octagon::~Octagon ()
	{

	}

	int setSize (int newSize = 0)
	{
		size = newSize;
		return 0;
	}

	int getSize ()
	{
		return size;
	}

	int getType ()
	{
		return type;
	}

	int setType (int newType = 0)
	{
		type = newType;
		return 0;
	}

	int display ()
	{
		int spaces = 0;
		collumn = 0;
		line = 0;

		printFirstSide();
		cout << endl;
		line ++;

		//print second filling and third sides
		for(int i = 1;i <= size;i++);
		{
			collumn = printSecondSide(i);
			printFilling(i);
			cout << "\\" << endl;
			line ++;
		}

		// print fourth filling and fifth sides
		for(int i = 1;i <= size; i++)
		{
			cout << "|";
			collumn = 1;
			printFilling(size+1);
			cout << "|" << endl;
			line ++;
		}

		collumn = 0;

		//print sixth filling and seventh sides minus last line
		for(int i = size; i >= 2; i--)
		{
			collumn = printSixthSide(i);
			printFilling(i);
			cout << "/" << endl;
			line ++;
		}

		//print eigth side

		printEigthSide();

		return 0;
	}

};