#include <stdio.h>
 
int main() {
    //double carroX = 60.0; //km/h
    //double carroY = 90.0; //km/h

    int distancia = 0;
    int tempo = 0;
    scanf("%d", &distancia);
    tempo = distancia * 2;
    
    printf("%d minutos\n", tempo);

    return 0;
}