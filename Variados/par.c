#include <stdio.h>

int main(){
	int numero = 0;

	printf("Digite um numero inteiro para descobrir se e impar ou par\n");

	scanf("%d",&numero);

	if(numero%2 == 0){
		printf("O numero %d é par",numero);
	}else{
		printf("O numero %d é impar",numero);
	}



return 0;
}

