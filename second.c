#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],n,i,j,s=0;
    printf("Enter array size\n");
    scanf("%d",&n);
    printf("Enter elements in array\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(i==j)
        continue;
        s=s+a[i][j];
        }
    }
    printf("\n sum=%d",s);
        getch();
}