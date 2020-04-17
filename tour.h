class tour:public piece
{
public:

	tour();
	tour(string couleur, string place);	//on a besoin de la place (droite ou gauche pour placer les tours) en plus de la couleur
	void Verification_deplacement();







private:

	string couleur;
	string place;
	int coord_x;
	int coord_y;

};

