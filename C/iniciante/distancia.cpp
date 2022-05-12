#include <stdio.h>
#include <math.h> 

int main() {
    double x1, x2, y1, y2 = 0.0;
    double dist = 0.0;

    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);

    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("%0.4lf\n", dist);
 
    return 0;
}