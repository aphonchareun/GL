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
	int sat[10] = {rand()%300-200,rand()%300-200,rand()%300-200,rand()%300-200,rand()%300-200,rand()%300-200,rand()%300-200,rand()%300-200,rand()%300-200,rand()%300-200,};
	unsigned char dist[10] = {1,5,8,10,14,16,30,35,40,50};
	unsigned char a[5] = {1,5,7,9,3};
	unsigned char b[5] = {0,0,0,0,0};
	unsigned char miroir[10] = {10,20,30,40,50};
	 unsigned int i, o, p, d, k, l, distance;
	
	
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

   		srand(time(NULL)); 
	for(o=0; o<10; o++)
	{

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
	
	
	for (p=0;p<10;p++)
	{
		if (p==0)
		{
			dist[p]= dist[p] ;
		}
		else 
		{
		d=p-1;
		distance = dist[p]-dist[d];
		}
	}			   
		
	for (k=0;k<5;k++)
	{
	 b[k]= a[4-k];
	}
	
	for (l=0;l<10;l++)
	{
	 miroir[l+5] =miroir[4-l];
	}
	
	return 0;
}
