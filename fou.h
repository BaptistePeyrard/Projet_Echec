#pragma once
class fou:public piece
{
public:
	fou();
	fou(string couleur_joueur, string place);
	void Verification_deplacement();


private:
	string couleur;
	string place;
	int coord_x;
	int coord_y;

};

