#include <stdio.h>

int main(){
	double k = 0;
	double f = 0;

	printf("Digite a temperatura em graus kelvin\n");
	scanf("%lf",&k);

	f = (k - 273.15)* 9/5 + 32 ;

	printf("A temperatura em graus fahreinheit eh %.2lf \n",f );



	return 0;
}