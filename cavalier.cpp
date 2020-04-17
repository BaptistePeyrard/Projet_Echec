#include "cavalier.h"
#include "piece.h"
#include <string>

using namespace std;

cavalier::cavalier()
{
}

cavalier::cavalier(string couleur_joueur, string place)
{

	if (couleur == "blanc") {
		coord_x = 1;
		if (place == "droite") {
			coord_y = 7;
		}
		else {
			coord_y = 2;
		}
	}
	else {
		coord_x = 8;
		if (place == "droite") {
			coord_y = 7;
		}
		else {
			coord_y = 2;
		}
	}

	couleur = couleur_joueur;


}

void cavalier::Verification_deplacement()
{



}
