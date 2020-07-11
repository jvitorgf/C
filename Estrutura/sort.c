#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
	int x[] = {3,23,65,25,233,657,45,27,2,6,4,623,3,45,3456,774,3,345,64};
	int n = 0;
	qsort(x, 19, sizeof(int), cmpfunc);


   for( n = 0 ; n < 19; n++ ) {   
      printf("%d ", x[n]);
   }

	return 0;
}

