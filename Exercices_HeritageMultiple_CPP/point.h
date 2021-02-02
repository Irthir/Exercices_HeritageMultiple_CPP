#pragma once
#include <iostream>

using namespace std;

class point
{
protected:
	int m_x, m_y;
public :
	point (int abs=0, int ord=0)
	{
		m_x = abs;
		m_y = ord;
	}
	void Affiche()
	{
		cout << "Coordonnées : " << m_x << " " << m_y << "\n";
	}
};