#include <stdio.h>


int checaTipo(int,int,int);

int main(){
	int a = 0,b=0,c=0;

	printf("Digite o valor do primeiro lado\n");
	scanf("%d",&a);
	printf("Digite o valor do segundo lado\n");
	scanf("%d",&b);
	printf("Digite o valor do terceiro lado\n");
	scanf("%d",&c);

	checaTipo(a,b,c);

	return 0;
}




int checaTipo(int a,int b,int c){
	if(a+b <= c || a+c <= b || c+b <= a){
		printf("Não é triângulo.");
		return 0;
	}

	if(a<=0 || b<=0 || c<=0){
		printf("Não é triângulo.");
		return 0;
	}

	if(a==c && c==b){
		printf("Triângulo equilátero");
		return 0;
	}else if(a==c || b==c || b==a) {
		printf("Triângulo isósceles");
		return 0;
	}else{
		printf("Triângulo escaleno");
		return 0;
	}
}

