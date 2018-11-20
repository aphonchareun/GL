//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

#define SEUIL 10

int main(void)
{
	unsigned char bin[10] = {1,17,14,16,9,3,7,17,0,12};
	
	int i=0;
	
	
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
	
	
	
	
	return 0;
}
