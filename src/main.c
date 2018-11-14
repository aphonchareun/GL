//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h>
#include<time.h>	//rajouter du temps permet de changer la valeur de nb_rand

int main(void)
{
    unsigned short s1=0;
	unsigned short s2=0;
	unsigned short s3=0;
    unsigned char n=1;
	unsigned char i=1; 
	unsigned char nb_rand;
	
    while(n<5)					//1ere question
	{    
    s1=s1+3*n;
    n=n+1;
	}
	
	while(s2<9873)				//2eme question
	{
	s2=s2+3*n;
	n=n+1;
	}
								// 3eme question
	srand(time(NULL)); 			//avec le time.h, permet d'enlever la contrainte du nombre figé nb_rand à une valeur fixe
    while(i<13)
	{
	nb_rand =rand()%11;
	s3=s3+nb_rand;
	i=i+1;
	}
	
	

    return 0;
}
