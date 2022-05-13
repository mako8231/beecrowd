#include <stdio.h>
 
int main() {
    float a, b, c = 0.0;
    float perimetro = 0.0;
    float area = 0.0;
    scanf("%f%f%f", &a, &b, &c);

    if ((a < b+c) && (b < a+c) && (c < a+b)){
        //é um triangulo
        perimetro = a + b + c;
        printf("Perimetro = %0.1f\n", perimetro);
    } else {
        //não é um triangulo
        area = ((a + b)*c)/2;
        printf("Area = %0.1f\n", area);
    }

    return 0;
}