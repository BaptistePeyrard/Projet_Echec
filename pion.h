#include "piece.h"

class pion:public piece
{
	

	pion();
	pion(string couleur_joueur, int numero_pion);
	void Verification_deplacement();
	








private:
	int coord_x;
	int coord_y;
	string couleur;
	

};

