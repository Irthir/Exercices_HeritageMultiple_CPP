#pragma once
#include <iostream>
using namespace std;

class PA
{
	int na;
public :
	PA(int nn = 1)
	{
		na = nn;
		cout << "$$construction objet PA " << na << "\n";
	}
};