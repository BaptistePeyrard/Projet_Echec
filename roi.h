class roi:public piece
{
public:
	
	roi();
	roi(string couleur_joueur);
	void Verification_deplacement();





private:
	string couleur;
	int coord_x;
	int coord_y;
};

