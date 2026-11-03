#include <stdio.h>

int main()
{
    int a[5], i;
    int *p;

    printf("Enter 5 elements: ");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    p = a;

    printf("Squares are: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", (*(p + i)) * (*(p + i)));
    }

    return 0;
}
