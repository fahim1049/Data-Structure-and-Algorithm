#include<stdio.h>

#include<time.h>

void merge(int ar[],int f,int mid,int l){

int n1=mid-f+1;

int n2=l-mid;

int i,j,k;

int p1[n1],p2[n2];

for(i=0;i<n1;i++){

p1[i]=ar[f+i];

}

for(j=0;j<n2;j++){

p2[j]=ar[mid+1+j];

}

i=0,j=0,k=f;

while(i<n1 && j<n2){

if(p1[i]<=p2[j]){

ar[k]=p1[i];

i++;

}else{

ar[k]=p2[j];

j++;

}

k++;

}

while(i<n1){

ar[k]=p1[i];

i++;

k++;

}

while(j<n2){

ar[k]=p2[j];

j++;

k++;

}

}

void merge_sort(int ar[],int f,int l){

if(f<l){

int mid=(f+l-1)/2;

merge_sort(ar,f,mid);

merge_sort(ar,mid+1,l);

merge(ar,f,mid,l);

}

}

int main(){

clock_t start_t, end_t;

int n;

printf("Enter the number of elements:");

scanf("%d",&n);

printf("\nEnter the elements: ");

int ar[n];

for(int i=0;i<n;i++){

scanf("%d",&ar[i]);

}

merge_sort(ar,0,n-1);

printf("\nAfter merge sort the array is : \n");

for(int i=0;i<n;i++){

printf("%d ",ar[i]);

}

printf("\n");

end_t=clock();

double total_t=(double)( start_t-end_t ) / CLOCKS_PER_SEC; printf("\nTotal time taken by CPU : %.3lf s\n",total_t); return 0;

}
