#include "pion.h"
#include "case_echec.h"
#include <string>

using namespace std;


pion::pion() 
{

}

pion::pion(string couleur_joueur, int numero_pion)
{

	coord_x = numero_pion;

	if (couleur_joueur == "blanc") {
		coord_y = 2;
	}
	else {
		coord_y = 7;
	}

	couleur = couleur_joueur;

}


void pion::Verification_deplacement()
{




}
