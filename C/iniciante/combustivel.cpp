#include <stdio.h>
 
int main() {
    int tempo, vm = 0;
    double distancia, consumo = 0.0;

    scanf("%d%d", &tempo, &vm);
    distancia = tempo * vm; 
    consumo = distancia/12;
    printf("%0.3lf\n", consumo);

    return 0;
}