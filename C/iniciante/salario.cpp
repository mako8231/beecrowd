#include <stdio.h>
 
int main() {
 
    int number, hours = 0;
    double perHour = 0.0;

    scanf("%d%d%lf", &number, &hours, &perHour);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %0.2lf\n", perHour * hours);
 
    return 0;
}