#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 5 == 0)
    {
        printf("Special Number");
    }
    else if (n % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }

    return 0;
}