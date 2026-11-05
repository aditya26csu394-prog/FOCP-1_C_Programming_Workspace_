#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three angles of triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || (a + b + c) != 180) {
        printf("Invalid Triangle\n");
    }
    else if (a < 90 && b < 90 && c < 90) {
        printf("Acute Triangle\n");
    }
    else if (a == 90 || b == 90 || c == 90) {
        printf("Right Triangle\n");
    }
    else {
        printf("Obtuse Triangle\n");
    }

    return 0;
}