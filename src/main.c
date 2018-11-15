//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdlib.h>
#include<time.h>	//rajouter du temps permet de changer la valeur de nb_rand

int main(void)
{
    unsigned short  s3=0;
    unsigned char  i=1, nb_rand ;


	
								// 3eme question
	srand(time(NULL)); 			//avec le time.h, permet d'enlever la contrainte du nombre fig� nb_rand � une valeur fixe
    while(i<13)
	{
	nb_rand =rand()%10;+1;
	s3=s3+nb_rand;
	i=i+1;
	}
}

