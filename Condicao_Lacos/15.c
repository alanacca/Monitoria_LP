#include <stdio.h>
#include <math.h>

int main(){
	float soma=0,fat;
	int n;
	for(int i=0;i<5;i++){
		n = 2*i;
		for(fat = 1; n > 1; n = n - 1){
			fat = fat * n;
		}
	soma = soma + (i/fat);
	}
	printf("%f",soma);
}
