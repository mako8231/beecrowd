#include <stdio.h>

using namespace std;
 
int main() {
    double A, B, C = 0.0;
    double MEDIA = 0.0;

    scanf("%lf%lf%lf", &A, &B, &C);
    MEDIA = (A * 0.2) + (B * 0.3) + (C * 0.5);
    printf("MEDIA = %0.1lf\n", MEDIA);
    
    return 0;
}