//Henrique Augusto Fabiano	
//11621EEL020

#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float *v, int tamanho)
{
	int i;
	float num;
	for(i = 0; i < tamanho; i++)
	v[i] = (float) rand()/(float) RAND_MAX + 0.5f;
}

float reduce(float *inicio_v, float *fim_v, float (*funcao)(float, float))
{
	return (inicio_v == fim_v )? 1 : (*funcao)(*inicio_v , reduce(inicio_v+1, fim_v, funcao));
}

float soma(float n1, float n2)
{
	return n1+n2;
}

float produto(float n1, float n2)
{
	return 	n1*n2;
}

int main(int argc, char ** argv)
{
	srand(123456);
	int opc = 0;
	float v[99];
	
	printf("Seja Bem-Vindo!\n");
	printf(" 1- Soma\n 2- Produtorio\n");
	printf("Digite a opcao desejada:\n");
	scanf("%d", &opc);
	getchar();
	
	gera_numeros(v,99);
	
	switch(opc)
	{
		case 1:
			printf("\nSoma: %f\n", reduce(v, v+99, soma)-1);
			return 0;
		case 2:
			printf("\nProdutorio: %f\n", reduce(v, v+99, produto));
			return 0;
	}
	
	return 0;
	
}
