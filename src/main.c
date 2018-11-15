//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_lib.h"


int main(void)
{
unsigned char resultat;
		 char points=0;
	
    while(LancerDe()<2)
	{
    resultat=LancerDe();
	
	if(resultat%2==0)

	 points=points+resultat;
	 
	 else if (resultat==3)
	 
	points= points*2;
	 
	 
	 else 
	 
	points=points-2;
	if (points<0)
	 points=0;        //il n'y a pas de dette !
	}

    return 0;
}
