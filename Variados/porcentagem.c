#include <stdio.h>




int main(){
	double n,m,p,q = 0;
	printf("Digite a porcentagem\n");

	scanf("%lf",&n);
	q = n;
	printf("Digite a quantidade\n");
	scanf("%lf",&m);

	n = n/100;	
	p = n*m;

	printf("%.2lf%% de %.2lf = %.2lf",q,m,p);





	return 0;
}


