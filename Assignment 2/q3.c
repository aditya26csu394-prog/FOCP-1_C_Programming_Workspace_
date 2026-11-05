#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units >= 0 && units <= 100) {
        bill = units * 2;
    }
    else if (units <= 200) {
        bill = units * 3;
    }
    else {
        bill = units * 5;
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}