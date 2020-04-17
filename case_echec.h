class case_echec
{
	case_echec(int coord_x, int coord_y);

	bool occupe();	// 0 pour vide et 1 pour occupé

	piece* get_piece(int coord_x, int coord_y);

	void set_piece(piece piece_joue);

	void deplacement_piece(piece piece_joue, int coord_x, int coord_y);

	void retirer_piece(int coord_x, int coord_y);

	int get_case_x();
	int get_case_y();



private:

	piece piece;
	int coord_x;
	int coord_y;

};

