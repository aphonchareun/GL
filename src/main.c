//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"


short tirerNumero (void);

int main(void)
{
	unsigned char joueur[6] = { 5, 35, 43, 13, 10, 8};
	short gagnante[6] = {tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()} ;
	unsigned char nombre_correcte=0;
	unsigned char i,j,o;
	unsigned char combiMax=0;
	unsigned char combi=0;
	unsigned char gagnant=0;
	
	
for (o=0;o<100;o++)
{
	for (i=0;i<6;i++)
	{
		for (j=0; j<6;j++)
	  {
			if (joueur[i]==gagnante[j])
			{
			nombre_correcte++;
			}											   
				else 
				{
				nombre_correcte = nombre_correcte;
				}
	   		
			if (nombre_correcte>1)
	 		{
			 gagnant= gagnant +1 ;
	 		}
	 	combi = nombre_correcte; 
	 
	 	if (combi >combiMax)
	 	{
	 	combiMax = combi;
	 	}
	 
	  }
	}
	
	 
	
}			
    return 0;

}
