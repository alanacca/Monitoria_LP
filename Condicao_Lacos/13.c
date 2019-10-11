//13. Em Matemática, o número harmônico designado por H(n) define-se como sendo a soma da série harmônica: H(n) = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n Faça um programa que leia um valor n inteiro e positivo e apresente o valor de H(n).

#include <stdio.h>

int main(void){
    printf("Digite um valor inteiro n para calcular a seria harmonica H(n)\n");
    int n = 0;
    scanf("%d", &n);
    float soma = 0;

    for(float i=1; i<=n; i++){
        soma = soma + 1/i;
    }
    printf("H(n) = %f\n", soma);
    return 0;
}