#include "roi.h"
#include "piece.h"
#include <string>

using namespace std;



roi::roi() {	//constructeur par defaut
}

roi::roi(string couleur_joueur){

	coord_x = 5;
	if (couleur == "blanc") {
		coord_y = 1;
	}
	else {
		coord_y = 8;
	}
	couleur = couleur_joueur;

}

void roi::Verification_deplacement()
{





}
