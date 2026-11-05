#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c))
        printf("Middle number = %d\n", a);
    else if ((b > a && b < c) || (b < a && b > c))
        printf("Middle number = %d\n", b);
    else
        printf("Middle number = %d\n", c);

    return 0;
}