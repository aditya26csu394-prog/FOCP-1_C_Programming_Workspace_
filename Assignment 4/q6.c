#include <stdio.h>

int main() {
    int marks;
    float attendance;

    printf("Marks = ");
    scanf("%d", &marks);

    printf("Attendance = ");
    scanf("%f", &attendance);

    if (marks >= 90 && attendance >= 70) {
        printf("S\n");   // Special Scholarship
    }
    else if (marks >= 75 && attendance >= 75) {
        printf("E\n");   // Eligible
    }
    else {
        printf("N\n");   // Not Eligible
    }

    return 0;
}