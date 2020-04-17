#include "fou.h"
#include "piece.h"
#include <string>

using namespace std;

fou::fou()
{
}

fou::fou(string couleur_joueur, string place)
{
	if (couleur == "blanc") {
		coord_x = 1;
		if (place == "droite") {
			coord_y = 6;
		}
		else {
			coord_y = 3;
		}
	}
	else {
		coord_x = 8;
		if (place == "droite") {
			coord_y = 6;
		}
		else {
			coord_y = 3;
		}
	}

	couleur = couleur_joueur;


}

void fou::Verification_deplacement()
{




}
