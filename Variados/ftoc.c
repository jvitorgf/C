#include <stdio.h>

int main(){
	double c = 0;
	double f = 0;

	printf("Digite a temperatura em graus fahrenheit\n");
	scanf("%lf",&f);


	c = (f - 32) * 5/9;

	printf("A temperatura em graus celsius eh %.2lf \n",c );



	return 0;
}