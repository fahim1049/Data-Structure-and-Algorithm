#include<stdio.h>
int main()
{
    int key,i,j,n,a [100];
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Enter a number for Search: ");

    scanf("%d",&key);

    for(j=1;i<n;j++)
    {

        if(a[j]==key)
        {
            printf("Matched");
            break;
         }
        }
        printf("Not Matched");

        }

