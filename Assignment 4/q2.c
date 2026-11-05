#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 2;
    }
    else if (units <= 200) {
        bill = (100 * 2) + ((units - 100) * 3);
    }
    else {
        bill = (100 * 2) + (100 * 3) + ((units - 200) * 7);
    }

    printf("Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}