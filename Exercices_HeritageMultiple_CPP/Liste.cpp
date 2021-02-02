#include "Liste.h"
#include "point.h"

Liste::Liste()
{
	debut = nullptr;
	
	actuel = debut;
}

Liste::~Liste()
{
	if (debut !=nullptr)
		destruction_element(debut);
}

void Liste::Ajoute(void* donnee)
{
	element *elem = new element;
	elem->suivant = debut;
	elem->contenu = donnee;
	debut = elem;
}

void* Liste::premier()
{
	actuel = debut;
	return actuel->contenu;
}

void* Liste::prochain()
{
	if (actuel != nullptr)
	{
		if (actuel->suivant != nullptr)
		{
			actuel = actuel->suivant;
		}
		else
		{
			cout << "Fin de liste : " << endl;
		}
	}
	else
	{
		actuel = debut;
	}

	return actuel->contenu;
}

bool Liste::fini()
{
	return (actuel->suivant == nullptr);
}

void Liste::destruction_element(element* elem)
{
	if (elem != nullptr)
	{
		if (elem->suivant != nullptr)
		{
			destruction_element(elem->suivant);
		}
		delete elem;
	}
}
