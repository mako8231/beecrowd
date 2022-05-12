#include <stdio.h>
 
int main() {
    int distancia = 0;
    double consumo, gasto = 0.0;

    scanf("%d%lf", &distancia, &consumo);
    gasto = distancia/consumo;
    printf("%0.3lf km/l\n", gasto);

    return 0;
}