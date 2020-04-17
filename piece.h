class piece
{
public:

	piece();	//constructeur par defaut
	piece(int coord_x, int coord_y, string couleur);	//constructeur pour l'initialisation du jeu
	/*
	void set_case_x();
	void set_case_y();
	*/
	int get_case_x();
	int get_case_y();
	
	/*void set_deplacement_x(int coord_x);
	void set_deplacement_y(int coord_y);
	

	int get_deplacement_x();
	int get_deplacement_y();
	
	*/


	void deplacement(int new_coord_x, int new_coord_y);







	void set_etat(bool etat);	//etat = 1 si la piece est "vivante" et = 0 si elle est "morte"
	bool get_etat();

	void set_couleur(string new_couleur);
	string get_couleur();










private:

	bool etat;
	string couleur;
	int coord_x;
	int coord_y;

};

