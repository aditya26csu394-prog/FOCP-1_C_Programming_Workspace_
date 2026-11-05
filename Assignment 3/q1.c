#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + (i * i);
    }

    printf("Sum of squares series = %d\n", sum);

    return 0;
}
