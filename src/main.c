//  Copyright (c) 2018 Antoine Tran Tan
//
#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
	unsigned char joueur[6] = {28, 35, 43, 33, 23, 8};
	short gagnante[6] ;
	unsigned char i,j,o,g;
	unsigned char nombre_correcte=0;
	unsigned char CombiMax=0;
	unsigned char Combi=0;
	
for (o=0;o<100;o++)
{
	initialiserTirage();
	nombre_correcte=0;
	
	for (g=0;g<6;g++)
	{
		gagnante[g] = tirerNumero() ;
	}							   
	
		for (i=0;i<6;i++)
		{
			for (j=0; j<6;j++)
	 		 {
				if (joueur[i]==gagnante[j])
				{
				nombre_correcte++;
				}											   
			 }
		}
	  Combi = nombre_correcte;
	  
	  if (Combi>CombiMax)
		  CombiMax=Combi;
	  
	  else
		  CombiMax=CombiMax;
	
}
    return 0;
}
