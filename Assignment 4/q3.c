#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three angles: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 || (a + b + c) != 180) {
        printf("I\n");   // Invalid
    }
    else if (a < 90 && b < 90 && c < 90) {
        printf("A\n");   // Acute
    }
    else if (a == 90 || b == 90 || c == 90) {
        printf("R\n");   // Right
    }
    else {
        printf("O\n");   // Obtuse
    }

    return 0;
}
