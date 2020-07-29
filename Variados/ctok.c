#include <stdio.h>

int main(){
	double c = 0;
	double k = 0;

	printf("Digite a temperatura em graus celsius\n");
	scanf("%lf",&c);


	k = c  + 273.15;

	printf("A temperatura em graus kelvin eh %.2lf \n",k );



	return 0;
}