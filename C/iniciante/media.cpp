#include <stdio.h>

int main(){
    double MEDIA = 0; 
    double A, B = 0; 

    scanf("%lf%lf", &A, &B);
    MEDIA = (((A * 0.35) + (B * 0.75))/11) * 10;
    printf("MEDIA = %0.5lf\n", MEDIA);

    return 0; 
}