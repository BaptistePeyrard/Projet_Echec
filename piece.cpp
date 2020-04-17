#include "piece.h"
#include <string>

using namespace std;

piece::piece()
{
}

piece::piece(int coord_x, int coord_y, string couleur)
{
	set_etat(1);
}




/*
void piece::set_case_x()
{
	int old_coord_x;
	old_coord_x=get_case_x();
	int coord_x;
	int deplacement_x;
	deplacement_x = get_deplacement_x();
	coord_x = old_coord_x + deplacement_x;
}

void piece::set_case_y()
{
	int old_coord_y;
	old_coord_y = get_case_y();
	int coord_y;
	int deplacement_y;
	deplacement_y = get_deplacement_y();
	coord_y = old_coord_y + deplacement_y;
}
*/







int piece::get_case_x()
{
	return coord_x;
}

int piece::get_case_y()
{
	return coord_y;
}


void piece::deplacement(int new_coord_x, int new_coord_y)
{
	coord_x = new_coord_x;
	coord_y = new_coord_y;

}









/*
void piece::set_deplacement_x(int coord_x)
{
}

void piece::set_deplacement_y(int coord_y)
{
}

int piece::get_deplacement_x()
{
	return 0;
}

int piece::get_deplacement_y()
{
	return 0;
}
*/
void piece::set_etat(bool etat)
{
}

bool piece::get_etat()
{
	return false;
}

void piece::set_couleur(string new_couleur)
{
	couleur = new_couleur;
}

string piece::get_couleur()
{
	return couleur;
}

