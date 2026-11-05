#include <stdio.h>

int main() {
    int a, r, n, i;
    int term, sum = 0;

    printf("Enter first term (a): ");
    scanf("%d", &a);

    printf("Enter common ratio (r): ");
    scanf("%d", &r);

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    term = a;

    for(i = 1; i <= n; i++) {
        sum = sum + term;
        term = term * r;
    }

    printf("Sum of Geometric Series = %d\n", sum);

    return 0;
}
