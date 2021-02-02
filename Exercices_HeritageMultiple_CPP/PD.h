#pragma once
#include "PB.h"
#include "PC.h"

class PD : public PB, public PC
{
	int nd;
public :
	PD(int n1, int n2, float x) : PC(n1), PB(x), PA(2 * n1 + 1)
	{
		nd = n2;
		cout << "$$construction objet PD " << nd << "\n";
	}
};