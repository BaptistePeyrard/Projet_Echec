#include "case_echec.h"
#include "piece.h"

bool case_echec::occupe()
{
	return false;
}

piece case_echec::get_piece(int coord_x, int coord_y)
{

	return piece;
}

void case_echec::set_piece(piece piece_joue)
{

	piece = piece_joue;


}

void case_echec::deplacement_piece(piece piece_joue, int coord_x, int coord_y)
{
}

void case_echec::retirer_piece(int coord_x, int coord_y)
{
}


int case_echec::get_case_x()
{
	return coord_x;
}

int case_echec::get_case_y()
{
	return coord_y;
}
