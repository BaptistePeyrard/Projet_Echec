class reine :public piece
{
public:

	reine();
	reine(string couleur_joueur);
	void Verification_deplacement();





private:
	string couleur;
	int coord_x;
	int coord_y;
};


