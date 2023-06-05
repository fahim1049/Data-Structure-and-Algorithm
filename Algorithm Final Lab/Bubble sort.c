#include<stdio.h>

#include<time.h>

int main(){

clock_t start_t, end_t;

int n;

printf("Enter the number of elements: ");

scanf("%d",&n);

printf("\nEnter the elements: ");

int ar[n],i;

for(i=0;i<n;i++){

scanf("%d",&ar[i]);

}

for(int j=1;j<n;j++){

int key=ar[j];

i=j-1;

while(i>=0 && key<ar[i]){

ar[i+1]=ar[i];

i-=1;

}

ar[i+1]=key;

}

printf("\nAfter insertion sort the array is : \n");

for(i=0;i<n;i++){

printf("%d ",ar[i]);

}

printf("\n");

end_t=clock();

double total_t=(double)(end_t-start_t ) / CLOCKS_PER_SEC; printf("\nTotal time taken by CPU : %.3lf s\n",total_t); return 0;

}
