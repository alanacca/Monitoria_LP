//3. Faça um programa que recebe um número, caso ele seja negativo retorna o valor positivo, caso seja maior que dez retorna a raiz do número e caso ele seja entre 1 e 10 retorna o número elevado ao quadrado. 

#include <stdio.h>
#include <math.h>
int main(void){

    int numero;
    printf("Digite um numero inteiro");
    scanf("%d", &numero);
    
    if (numero<0)
        numero = numero *-1;
    else if(numero>10)
        numero = sqrt(numero);
    else if(numero<10 && numero>1)
        numero = pow(numero, 2);
    else
        printf("Nenhuma condicao atendida");
        
    return numero;
}