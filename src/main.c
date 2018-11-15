//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h>
#include<time.h>	//rajouter du temps permet de changer la valeur de nb_rand

int main(void)
{
    unsigned short s1=0, s2=0, s3=0;
    unsigned char n=1, i=1, nb_rand ;
	unsigned short a=1,b=1,c=1,V1=0,V2=0,s4=0; //initialisation question 4

	
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
	srand(time(NULL)); 			//avec le time.h, permet d'enlever la contrainte du nombre fig� nb_rand � une valeur fixe
    while(i<13)
	{
	nb_rand =rand()%11;
	s3=s3+nb_rand;
	i=i+1;
	}


	while (c<21)                 //4eme question
	{										  
		
  if (c%3==0)
	{
	V2=V2+7*b;
	V1=V1;
	s4=V1+V2;
	c=c+1;

	if (a%7==0&&b%3==0)
	{
		b=b+1;
		a=a+1;
	}
	else 
	{
		b=b+1; 
	}
	}

	else
	{
	 
	V1=V1+ 3*a;
	V2=V2;
	s4=V1+V2;												
	a=a+1;
	c=c+1;
	
	}
	}
	
    return 0;
}
