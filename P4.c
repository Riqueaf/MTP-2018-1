//Henrique Augusto Fabiano 11621EEL020

#include <stdio.h>

int main ()
{	
	char num[256];

	printf("Digite um numero: ");
	scanf("%s", &num);
	getchar();
	
	int  a=0,mut=0;
	
	
	while(num [a] !='\0')
	{
		if(num [a]>=48&&num[a]<=57)
		    mut=mut*10+num[a]-48;
		    
		    a++;
	}
		

	printf("Valor retornado: %d", mut);
	return 0;
}
