#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c = 0.0;
    double pi = 3.14159;
    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo = 0.0;

    scanf("%lf%lf%lf", &a, &b, &c);

    areaTriangulo = (a * c)/2;
    areaCirculo = (pi * pow(c, 2));
    areaTrapezio = ((a + b) * c)/2.0;
    areaQuadrado = pow(b, 2.0);
    areaRetangulo = a * b; 

    printf("TRIANGULO: %0.3lf\n", areaTriangulo);
    printf("CIRCULO: %0.3lf\n", areaCirculo);
    printf("TRAPEZIO: %0.3lf\n", areaTrapezio);
    printf("QUADRADO: %0.3lf\n", areaQuadrado);
    printf("RETANGULO: %0.3lf\n", areaRetangulo);
 

    return 0;
}