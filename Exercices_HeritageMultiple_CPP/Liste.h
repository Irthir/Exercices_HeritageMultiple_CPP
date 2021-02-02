#pragma once
#include <iostream>
using namespace std;

struct element //Structure d'un �l�ment de liste
{
	element* suivant; //pointeur sur un l'�l�ment suivant
	void* contenu; //pointeur sur un objet quelconque
};

class Liste
{
protected:
	element* debut; //pointeur sur premier �l�ment.
	element* actuel; //pointeur sur l'�l�ment actuel.
public :
	Liste(); //constructeur
	~Liste(); //destructeur

	void Ajoute(void*); //ajouter un �l�ment en d�but de liste.
	void* premier(); //positionne sur le premier �l�ment.
	void* prochain(); //positionne sur le prochain �l�ment.
	bool fini(); //renvoie vrai si la position actuelle �quivaut � la fin de la liste.

	void destruction_element(element* elem); //Fonction r�cursive pour nettoyer la liste, elle sera appel�e par le destructeur.
};