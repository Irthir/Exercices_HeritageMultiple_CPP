#include <iostream>
#include "C.h"
#include "PD.h"
#include "liste_points.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //Pour mettre les accents dans la console.


	cout << endl << "Exercices 109/110/111" << endl << endl;
	C c1;
	C c2(10, 11, 12, 5.0);
	
	//Exercice 109
	/** construction objet B : 1 0
	** construction objet A : 1 1
	** construction objet C : 3 3
	** construction objet B : 1 5
	** construction objet A : 10 1
	** construction objet C : 12 21*/

	//Exercice 110
	/** construction objet B : 1 0
	** construction objet A : 2 1
	** construction objet C : 3 3
	** construction objet B : 1 5
	** construction objet A : 2 1
	** construction objet C : 12 21*/

	//Exercice 111
	/** construction objet B : 1 0
	** construction objet A : 2 1
	** construction objet C : 3 3
	** construction objet B : 1 0
	** construction objet A : 2 1
	** construction objet C : 12 21*/

	/***************************************************************************************************************\
	* Les constructeurs sont appelés dans l'ordre B A C quand on crée un objet C.									*
	* Si dans le constructeur les valeurs pour A et/ou B sont données cela se remarque dans le constructeur.		*
	* Et si les constructeurs de A et de B ne sont pas appelés explicitements, ils sont appelés implicitements.		*
	* Cela signifie que si on n'appelle pas explicitement les constructeurs qui n'auraient pas de valeur par défaut,*
	* alors le compilateur rejettera une erreur car l'appelle des constructeurs des parents est obligatoire.		*
	\***************************************************************************************************************/

	cout << endl << "Exercices 112/113" << endl << endl;
	PD d(10, 20, 5.0);

	//Exercice 112
	/*$$construction objet PA 1
	$$construction objet PB 5
	$$construction objet PA 21
	$$construction objet PC 10
	$$construction objet PD 20*/

	//Exercice 113
	/*$$construction objet PA 21
	$$construction objet PB 5
	$$construction objet PC 10
	$$construction objet PD 20*/


	cout << endl << "Exercices 114" << endl<< endl;

	point pt(1, 1);
	point pt1(3, 2);
	point pt2(4, 6);
	point pt3(5, 10);

	liste_points liste_p(&pt); //Création de la liste de points.

	liste_p.Ajoute(&pt1);
	liste_p.Ajoute(&pt2);
	liste_p.Ajoute(&pt3);
	liste_p.Ajoute(&pt2);
	liste_p.Ajoute(&pt1);
	liste_p.Ajoute(&pt);

	liste_p.Liste(); //Affichage de la liste de points.

	return 0;
}