#include <stdio.h>

float soma(float,float);
void menu();
float subtracao(float,float);
float multiplicacao(float,float);
float divisao(float,float);

int main() {
	menu();

	return 0;
}

void menu(){
	printf("1. Para realizar uma soma\n");
	printf("2. Para realizar uma subtracao\n");
	printf("3. Para realizar uma multiplicacao\n");
	printf("4. Para realizar uma divisao\n");
	float a = 0;
	float b = 0;
	int c = 0;
	scanf("%d",&c);
	switch(c){
		case 1 :
			printf("Digite o primeiro numero:");
			scanf("%f",&a);
			printf("Digite o segundo numero:");
			scanf("%f",&b);
			printf("O resultado da soma e %.2f\n",soma(a,b));
			main();
			break;
		case 2 :
			printf("Digite o primeiro numero:");
			scanf("%f",&a);
			printf("Digite o segundo numero:");
			scanf("%f",&b);
			printf("O resultado da subtracao e %.2f\n",subtracao(a,b));
			main();
			break;
		case 3 :
			printf("Digite o primeiro numero:");
			scanf("%f",&a);
			printf("Digite o segundo numero:");
			scanf("%f",&b);
			printf("O resultado da multiplicacao e %.2f\n",multiplicacao(a,b));
			main();
			break;
		case 4 :
			printf("Digite o primeiro numero:");
			scanf("%f",&a);
			printf("Digite o segundo numero:");
			scanf("%f",&b);
			printf("O resultado da divisao e %.2f\n",divisao(a,b));
			main();
			break;
		default :
			printf("Invalido\n");
			main();

		
	}
}

float soma(float a, float b){
	return a + b;
}

float subtracao(float a, float b){
	return a - b;

}

float multiplicacao(float a,float b){
	return a*b;
}

float divisao(float a,float b){
	return a/b;
}