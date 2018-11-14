//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h>
#include<time.h>

int main(void)
{
    unsigned short s1=0;
    unsigned char n=1;
	unsigned short s2=0;
	unsigned char nb_rand;
	unsigned char i=1;
	unsigned short s3=0;
	
	
    while(n<5)
	{    
    s1=s1+3*n;
    n=n+1;
	}
	
	while(s2<9873)
	{
	s2=s2+3*n;
	n=n+1;
	}

	srand(time(NULL)); 
    while(i<13)
	{
	nb_rand =rand()%11;
	s3=s3+nb_rand;
	i=i+1;
	}

    return 0;
}
