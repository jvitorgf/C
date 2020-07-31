#include <stdio.h>

int main(){
	double c = 0;
	double k = 0;

	printf("Digite a temperatura em graus kelvin\n");
	scanf("%lf",&k);

	c = k - 273.15;

	printf("A temperatura em graus celsius eh %.2lf \n",c );



	return 0;
}