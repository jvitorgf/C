#include <stdio.h>

int main(){
	double c = 0;
	double f = 0;

	printf("Digite a temperatura em graus celsius\n");
	scanf("%lf",&c);


	f = (c * 9/5) + 32;

	printf("A temperatura em graus fahrenheit eh %.2lf \n",f );



	return 0;
}