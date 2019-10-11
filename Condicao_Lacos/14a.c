//14. Faça programas para calcular as seguintes sequências: 
//a) 1 − 2 + 3 − 4 + 5 + ... + (2n − 1) 

#include <stdio.h>

int main(void){

    int flag = 0;
    int temp = 0;
    
    printf("Digite um numero inteiro n\n");
    int numero;
    scanf("%d", &numero);
    for (int i=1; i<numero; i++){
        if (flag == 0){
            temp = i;
            flag = 1;
        }
        else {
            temp =i*-1;
            flag = 0;
        }
        printf("%d ",r);
    }    
    return 0;
}