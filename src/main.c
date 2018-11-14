//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include "TP_Lib"


int main(void)
{
unsigned char resultat,LancerDe,tirage;
		 unsigned char points=0;
	
    while(tirage<2)
	{
    resultat=LancerDe;
	
	if(resultat%2==0)

	 points=points+resultat;
	 
	 else if (resultat==3)
	 
	points= points*2;
	 
	 
	 else 
	 
	points=points-2;
	 
	}

    return 0;
}
