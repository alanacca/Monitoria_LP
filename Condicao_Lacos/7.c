//7. Faça um programa que calcule e mostre a soma dos 30 primeiros números ímpares.

#include<stdio.h>
int main(void){
	int soma =0;     
   
    for(int i=0; i<30; i++){
        if(i%2!=0){
           soma +=i;
        }
    }
    printf("%d\n",soma);
   
    return 0;
}