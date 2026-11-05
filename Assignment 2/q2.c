#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
        printf("Middle number = %d", a);
    else if ((b > a && b < c) || (b < a && b > c))
        printf("Middle number = %d", b);
    else
        printf("Middle number = %d", c);

    return 0;
}