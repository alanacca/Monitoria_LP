//12. Faça um programa que receba dois números. Calcule e mostre:
// - a soma dos números pares desse intervalo de números, incluindo os números digitados; 
// - a multiplicação dos números ímpares desse intervalo, incluindo os digitados.


#include <stdio.h>

int main(void){

    printf("Digite dois numeros inteiro para exibir a soma dos pares e multiplicação dos impares deste intervalo\n");
    int x =0, y=0;
    int soma = 0, mult = 1;


    scanf("%d %d", &x, &y);
    
    for(int i =x; i<=y; i++){
        if(i%2==0){
            //printf("Soma: %d + %d = " , soma, i);
            soma +=i;
            //printf("%d\n" , soma);
        }else{
            //printf("Multi: %d * %d = " , mult, i);
            mult *=i;
            //printf("%d\n" , mult);           
        }
    }

    printf("Soma Pares: %d\nMultiplicacao Impares: %d", soma, mult);

    return 0;
}