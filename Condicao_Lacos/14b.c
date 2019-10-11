//14. Faça programas para calcular as seguintes sequências: 
//b) 1 + 3 + 5 + 7 +...+ (2n − 1).


#include <stdio.h>

int main(void){

    int flag = 0;
    int r = 0;
    
    printf("Digite um numero inteiro n\n");
    int numero;
    scanf("%d", &numero);
    for (int i=1; i<=numero; i+=2){        
        printf("%d ",i);

    }
    
    return 0;
}