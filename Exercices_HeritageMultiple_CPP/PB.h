#pragma once
#include "PA.h"

class PB : virtual public PA
{
	float xb;
public :
	PB(float xx = 0.0)
	{
		xb = xx;
		cout << "$$construction objet PB " << xb << "\n";
	}
};