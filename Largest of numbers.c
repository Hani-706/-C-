#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,large,n;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter the elements in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    large=a[0];
    
    for(i=0;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
    }
    printf("\nlargest num=%d",large);
}