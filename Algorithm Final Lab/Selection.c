#include<stdio.h>

#include<string.h>

#include<time.h>

int findMax(int n1, int n2){

if(n1>n2) {

return n1;

} else {

return n2;

}

}

int knapsack(int W, int wi[], int pr[], int n){

int K[n+1][W+1];

for(int i = 0; i<=n; i++) {

for(int w = 0; w<=W; w++) {

if(i == 0 || w == 0) {

K[i][w] = 0;

} else if(wi[i-1] <= w) {

K[i][w] = findMax(pr[i-1] + K[i-1][w-wi[i-1]], K[i-1][w]); } else {
K[i][w] = K[i-1][w];

}

}

}

return K[n][W];

}

int main(){

clock_t start_t, end_t;

printf("Enter the number of profit & weight elements: ");

int n;

scanf("%d",&n);

int wi[n],pr[n];

printf("\nEnter weight: ");

for(int i=0;i<n;i++){

scanf("%d",&wi[i]);

}

printf("\nEnter profit: ");

for(int i=0;i<n;i++){

scanf("%d",&pr[i]);

}

printf("\nEnter max weight: ");

int W;

scanf("%d",&W);

int len= sizeof pr/ sizeof pr[0];

printf("Maximum Profit achieved with this knapsack: %d", knapsack(W,wi,pr,len)); end_t=clock();
double total_t=(double)( start_t-end_t ) / CLOCKS_PER_SEC; printf("\nTotal time taken by CPU : %.3lf s\n",total_t); return 0;

}
