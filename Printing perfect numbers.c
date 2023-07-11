#include <stdio.h>
#include <conio.h>
int main()
{
    int limit, n, i, sum = 0;
    printf("Enter the limit value: ");
    scanf("%d", &limit);
    for (n = 1; n < limit; n++)
    {
        sum=0;
        for (i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum = sum + i;
            }
        }
        if (n == sum)
            printf("%d\n", n);
    }
    return 0;
}
