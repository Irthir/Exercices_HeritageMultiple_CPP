#pragma once
#include "PA.h"

class PC : virtual public PA
{
	int nc;
public :
	PC(int nn = 2) : PA(2 * nn + 1)
	{
		nc = nn;
		cout << "$$construction objet PC " << nc << "\n";
	}
};