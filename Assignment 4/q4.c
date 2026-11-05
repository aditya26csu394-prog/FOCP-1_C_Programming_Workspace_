#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("Result = %.2f\n", (float)a / b);
            break;

        case '%':
            if (b == 0)
                printf("Cannot divide by zero\n");
            else
                printf("Result = %d\n", a % b);
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}