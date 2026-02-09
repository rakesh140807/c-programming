#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    float a, b, c, total, average;
    char g;

    printf("Enter the marks of three subjects: ");
    scanf("%f %f %f", &a, &b, &c);

    total = a + b + c;
    average = total / 3;

    printf("Total Marks = %.2f\n", total);
    printf("Average = %.2f\n", average);

    if (average >= 90)
        g = 'A';
    else if (average >= 80)
        g = 'B';
    else if (average >= 70)
        g = 'C';
    else if (average >= 60)
        g = 'D';
    else if (average >= 50)
        g = 'E';
    else
        g = 'F';

    printf("Grade = %c\n", g);

    if (a >= 50 && b >= 50 && c >= 50)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    return 0;
}
