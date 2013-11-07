#ifndef OCTAGON_H
#define OCTAGON_H

class ClassOctagon
{
private:

	int size;
	int type;
	int line;
	int collumn;

	int printFirstSide ();
	int printSecondSide (int sideLine = 0);
	int printSixthSide (int sideLine = 0);
	int printEigthSide ();
	int printFilling (int space = 0);

public:

	// Constructor and destructor
	ClassOctagon (int newSize = 0, int newType = 0);
	~ClassOctagon ();

	// Used to set size parameter, int for length of sides in the 
	// octagon in characters
	int setSize (int newSize = 0);

	// will return what size is currently set to
	int getSize ();

	// Used to set type parameter, int with the following meanings
	// 1: clear		
	// 2: filled		
	// 3: horizontal lines
	// 4: vertical lines	
	// 5: crossed lines
	int setType (int newType = 0);

	// will return what type is currently set to
	int getType ();

	// will print an octagon according to current value of size and type and return 0 when done
	int display ();
}

#endif