#ifndef OCTAGON_H
#define OCTAGON_H

class Octagon
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

	Octagon::Octagon (int newSize = 0, int newType = 0);
	Octagon::~Octagon ();

	int setSize (int newSize = 0);
	int getSize ();
	int getType ();
	int setType (int newType = 0);
	int display ();
}

#endif