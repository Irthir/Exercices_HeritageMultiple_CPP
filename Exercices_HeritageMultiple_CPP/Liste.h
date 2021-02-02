#pragma once
#include <iostream>
using namespace std;

struct element //Structure d'un élément de liste
{
	element* suivant; //pointeur sur un l'élément suivant
	void* contenu; //pointeur sur un objet quelconque
};

class Liste
{
protected:
	element* debut; //pointeur sur premier élément.
	element* actuel; //pointeur sur l'élément actuel.
public :
	Liste(); //constructeur
	~Liste(); //destructeur

	void Ajoute(void*); //ajouter un élément en début de liste.
	void* premier(); //positionne sur le premier élément.
	void* prochain(); //positionne sur le prochain élément.
	bool fini(); //renvoie vrai si la position actuelle équivaut à la fin de la liste.

	void destruction_element(element* elem); //Fonction récursive pour nettoyer la liste, elle sera appelée par le destructeur.
};