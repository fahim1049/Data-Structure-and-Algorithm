#include<stdio.h>
int main()
{
    int array [100],s,i,n;
    printf("Enter number of element\n");
    scanf("%d",&n);
    printf("Enter Number's\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    printf("Enter an to Search\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(array[i] == s)

    {

    printf("%d is at location %d\n",s,i+1);
    break;
   }
}
if(i== n)
    printf("%d not in the array\n",s);
return 0;
}
