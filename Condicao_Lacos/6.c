//6. Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.

#include<stdio.h>
int main(void){
    printf("Digite um numero inteiro:\n");
    int count;
    scanf("%d",&count);
    int countador_aux = count;    
   
    for(int i=0; i<=countador_aux; i++){
        if(i%2!=0){
           count--;
           printf("%d ", i);
        }
    }
   
    return 0;
}