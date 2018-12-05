//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	char Ligne1[80] = "Nom: triangle_A";
	char Ligne2[80] = "Nb points: 3";
	char Ligne3[80] = "Cordonnees: 10 20 30 20 30 40 -1 -1 -1 -1";
	
	char Ligne4[80] = "Nom: pentagone_B";
	char Ligne5[80] = "Nb points: 5";
	char Ligne6[80] = "Cordonnees: 10 20 30 20 30 40 43 53 35 65";
	
	char nom_fig[80];
	char nb_pts;
	char x[5];
	char y[5];
	
	char bnom_fig[80];
	char bnb_pts;
	char bx[5];
	char by[5];
	
	sscanf (Ligne1,"%*s %s",nom_fig);
	sscanf (Ligne2,"%*s %u", nb_pts);
	sscanf (Ligne3,"%*s %u %*u %u %*u %u %*u %u %*u %u %*u",&x);
	sscanf (Ligne3,"%*s %*u %u %*u %u %*u %u %*u %u %*u %u",&y);
	
	sscanf (Ligne4,"%*s %s",bnom_fig);
	sscanf (Ligne5,"%*s %u", bnb_pts);
	sscanf (Ligne6,"%*s %u %*u %u %*u %u %*u %u %*u %u %*u",&bx);
	
	sscanf (Ligne6,"%*s %*u %u %*u %u %*u %u %*u %u %*u %u",&by);
	
	
	printf("La figure %s possede %u sommets",nom_fig,nb_pts);
	printf("La figure %s possede %u sommets",bnom_fig,bnb_pts);

    return 0;
}
