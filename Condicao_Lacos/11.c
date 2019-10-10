//11. Faça um programa que some os números primos existentes entre a e b, onde a e b são números informados pelo usuário.

#include <stdio.h>

int main(void){

    printf("Digite dois numeros a e b para somar numeros primos neste intervalo\n");
    //primo = 1 verdadeiro
    //primo = 0 falso

    int a, b, primo = 1, i, divisor, soma=0;
    scanf("%d", &b);
    scanf("%d", &b);

    for(i=a; i<=b;i++){
        primo = 1;
        if (i<=1 ||(i!=2 && i%2==0)){
            primo =0;
        }

        divisor=3;

        while (primo==1 && divisor<i/2)
        {
            if (i%divisor==0)
                primo = 0;
            divisor+=2;
        }

        if(primo==1){
            //printf("%d - Primos\n", i);
            soma = soma + i;
        }
    }
    printf("Soma: %d", soma);
}