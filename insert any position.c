#include<stdio.h>
main()
{
int a[10],i,newvalue,newindex,n;
printf("Enter array Size less than 10");
scanf("%d",&n);
printf("Enter %d array elements ",n);
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printf("array elements are : ");
for(i=0;i<n;i++)
    printf("%d ",a[i]);

    printf("Enter the value that you want to insert ");
    scanf("%d",&newvalue);
    printf("Enter the index where you want to insert ");
    scanf("%d",&newindex);

   // if()
    //    prinft("can not insert as no empty space is available");

    for(i=n-1;i>=newindex;i--)
        a[i+1]=a[i];

    a[newindex]=newvalue;

printf("After Insertion elements of the array are : ");
 for(i=0;i<n+1;i++)
    printf("%d ",a[i]);

}
