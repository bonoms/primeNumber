#include <stdio.h>

int main()
{
    int i, num = 0, k = 2, max;

    printf("Enter the maximum number to check for prime -> ");
    scanf("%d", &max);

    for (i = 1; i <= max; i++)
    {
        while ((i % k) != 0 && k < i)
        {
            k++;
        }

        if (k == i)
        {
            printf("%d \n", i);
        }
        k = 2;
    }

    return 0;
}