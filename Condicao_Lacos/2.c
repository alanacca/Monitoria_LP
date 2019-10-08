//2. Faça um programa que recebe um número e verifica se ele é divisível por 15.

#include <stdio.h>

int main()
{
    int aux;

    printf("Digite um numero inteiro");
    scanf("%d", &aux);

    if (aux%5==0 && aux%3==0)
        printf("Divisivel por 15");
    else
        printf("Não é divisivel");    
    return 0;
}