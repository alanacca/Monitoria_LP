//1. Faça um programa que peça ao usuário para digitar 10 valores e some-os.

#include <stdio.h>

int main(void){

	int aux, i, j,soma=0;
    printf("Digite 10 valores inteiros\n");
	for (i=0; i<10;i++)
	{
			scanf("%d", &aux);
			soma=soma+aux;
	}
	printf("soma:%d\n",soma);
}