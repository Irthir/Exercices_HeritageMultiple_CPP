#include "liste_points.h"

liste_points::liste_points(point* pt)
{
	Liste::Ajoute(pt);
}

void liste_points::Ajoute(point* pt)
{
	Liste::Ajoute(pt);
}

void liste_points::Liste()
{
	static_cast<point*>(premier())->Affiche();
	
	while (!fini())
	{
		static_cast<point*>(prochain())->Affiche();
	}
}