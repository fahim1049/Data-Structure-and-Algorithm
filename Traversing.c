#include <stdio.h>

int main () {

   int a[10],n; /* n is an array of 10 integers */
   int i;

   printf("Enter a number less than 11 : ");
   scanf("%d",&n);
   if(n>10) return 0;

   /* initialize elements of array n to 0 */
   printf("Enter %d elements for the array : ",n);
   for ( i = 0; i < n; i++ ) {
      scanf("%d",&a[i]);
   }

   /* output each array element's value */
   printf("Inserted elements of the array : \n");
   for (i = 0; i < n; i++ ) {
      printf("Element[%d] = %d\n", i, a[i] );
   }

   return 0;
}
