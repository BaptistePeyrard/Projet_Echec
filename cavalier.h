#pragma once
class cavalier:public piece
{

public:

	cavalier();
	cavalier(string couleur_joueur, string place);
	void Verification_deplacement();







private:

	string couleur;
	string place;
	int coord_x;
	int coord_y;





};

