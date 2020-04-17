#include "tour.h"
#include "piece.h"
#include <string>

using namespace std;

tour::tour()
{
}

tour::tour(string couleur_joueur, string place)
{
	if (couleur == "blanc") {
		coord_x = 1;
		if (place == "droite") {
			coord_y = 8;
		}
		else {
			coord_y = 1;
		}
	}
	else {
		coord_x = 8;
		if (place == "droite") {
			coord_y = 8;
		}
		else {
			coord_y = 1;
		}
	}

	couleur = couleur_joueur;


}

void tour::Verification_deplacement()
{



}
