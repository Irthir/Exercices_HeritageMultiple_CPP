#pragma once
#include "A.h"
#include "B.h"

class C : public B, public A
{
	int n;
	int p;
public :
	//C(int n1 = 1, int n2 = 2, int n3 = 3, float v = 0.0) : A(n1), B(v) //Exercice 109
	//C(int n1=1, int n2=2, int n3=3, float v=0.0): B(v) //Exercice 110
	C(int n1=1, int n2=2, int n3=3, float v=0.0) //Exercice 111
	{
		n = n3;
		p = n1 + n2;
		cout << "** construction objet C : " << n << " " << p << "\n";
	}
};
