#pragma once
#include "Liste.h"
#include "point.h"

class liste_points: public point, public Liste
{
public :
	liste_points(point* pt); //Création de la liste de points.

	void Ajoute(point*); //Fonction d'ajout d'un point dans la liste.
	void Liste(); //Fonction d'affichage du contenu de la liste.
};