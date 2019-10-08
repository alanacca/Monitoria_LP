#include <stdio.h>
#include <math.h>

//1. Leia um número real e imprima o resultado do quadrado desse número. Depois, imprima a quinta parte deste número.

int main(){
    printf("Digite um valor para calcular o quadrado: ");
    float num;
    scanf("%f", &num);
    int quadrado = pow(num, 2);
    float quinta = (float) num/5;
    printf("Quadrado: %d \n", quadrado);
    printf("Quinta parte: %.2f \n", quinta);
    
    return 0;
}