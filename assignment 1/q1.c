#include<stdio.h>
int main() 
    #include <stdio.h>
{
    int student_id, age;
    float percentage;
    char grade;

    printf("Enter Student ID: ");
    scanf("%d", &student_id);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Percentage: ");
    scanf("%f", &percentage);

    printf("Enter Grade: ");
    scanf(" %c", &grade);

    printf("\n----- Student Information -----\n");
    printf("Student ID : %d\n", student_id);
    printf("Age        : %d\n", age);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}
