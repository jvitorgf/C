#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(){
	int x[] = {3,23,65,25,233,657,45,27,2,6,4,623,3,45,3456,774,3,345,64};
	int n = 0,key=3456;
	int * pItem;
	qsort(x, 19, sizeof(int), cmpfunc);


   for( n = 0 ; n < 19; n++ ) {   
      printf("%d ", x[n]);
   }
	
   pItem = (int*) bsearch (&key, x, 19, sizeof (int), cmpfunc);
   if (pItem!=NULL)
   	printf ("%d is in the array.\n",*pItem);
   else
    	printf ("%d is not in the array.\n",key);

	return 0;
}

