#include <stdio.h>
#include <math.h>

int main (){
    double pi = 3.14159;
    double raio, area = 0; 

    scanf("%lf", &raio);
    area = pi * pow(raio, 2.0);
    printf("A=%0.4lf\n", area);
    return 0; 
}