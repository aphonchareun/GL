//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
    unsigned short s1=0;
    unsigned char n=1;
	unsigned short s2=0;

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
	
    return 0;
}
