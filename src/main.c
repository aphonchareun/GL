//  Copyright (c) 2018 Antoine Tran Tan
//
#include <ansi_c.h>
#include "my_header.h"
#include<time.h>
#define SEUIL 10
#define SEUILB -100
#define SEUILH 200

int main(void)
{
	unsigned char bin[10] = {1,17,14,16,9,3,7,17,0,12};
	int sat[10] = {rand()%200,rand()%200,rand()%200,rand()%200,rand()%200,rand()%200,rand()%200,rand()%200,rand()%200,rand()%200};
	unsigned char dist[10] = {1,5,8,10,14,16,30,35,40,50};
	int i=0, o=0 ;
	
	
	for(i=0; i<10; i++)
	{
		if (bin[i] <SEUIL)
		{	
			bin[i] =0;
		}	
		else
		{
			bin[i] =1;
		}

	}


	for(o=0; o<10; o++)
	{
		srand(time(NULL));
		if (sat[o] <SEUILB)
		{	
			sat[o] =SEUILB;
		}	
		else if (sat[o] >SEUILH)
		{
			sat[o] =SEUILH;
		}
		else sat[o]=sat[o];
	}
	
	
	
	
	return 0;
}
