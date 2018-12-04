//  Copyright (c) 2018 Antoine Tran Tan
//

#include <ansi_c.h>
#include "my_header.h"

int main(void)
{
	char nom[100];
	char prenom[100];
	unsigned int age;
	
	
	
	
	printf("entrer nom:");
	scanf("%s",nom);
	
	printf("entrer prenom:");     
	scanf("%s",prenom);
	
	printf("entrer age:");
	scanf("%u",&age);

	
	printf("Je m'appelle %s %s et j'ai %u ans",prenom,nom,age);
	
	
    return 0;
}
