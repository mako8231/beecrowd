#include <stdio.h>
#include <math.h>
 
int main() {
    double pi = 3.14159;
    double raio = 0.0; 
    double volume = 0.0;

    scanf("%lf", &raio);
    volume = (4.0/3.0) * pi * pow(raio, 3);
    printf("VOLUME = %0.3lf\n", volume);

    return 0;
}