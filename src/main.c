//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib_suite.h"

int main(void)
{
	unsigned char joueur[6] = { 5, 35, 43, 13, 10, 8};
	unsigned char gagnante[6] = { 5, 14, 43, 13, 15, 1} ;
	unsigned char nombre_correcte=0;
	unsigned char i,j;
	
	
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
		}	
	}		
			
			
			
			
			
			
			
    return 0;
	
	
	
}
