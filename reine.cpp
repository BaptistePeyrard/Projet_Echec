#include "reine.h"
#include "piece.h"
#include <string>

using namespace std;



reine::reine() {	//constructeur par defaut
}

reine::reine(string couleur_joueur) {

	coord_x = 4;
	if (couleur == "blanc") {
		coord_y = 1;
	}
	else {
		coord_y = 8;
	}
	couleur = couleur_joueur;

}

void reine::Verification_deplacement()
{





}
