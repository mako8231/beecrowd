#include <stdio.h>
 
int main() {
    float valor = 0.0;
    int min, max = 0;
    char minc, maxc = 0; 
    scanf("%f", &valor);

    if (valor >= 0 && valor <= 25){
        min = 0;
        max = 25;
        minc = '[';
        maxc = ']';
    } else if (valor > 25 && valor <= 50){
        min = 25; 
        max = 50;
        minc = '(';
        maxc = ']';
    } else if (valor > 50 && valor <= 75){
        min = 50;
        max = 75;
        minc = '(';
        maxc = ']';
    } else if (valor > 75 && valor <= 100){
        min = 75;
        max = 100;
        minc = '(';
        maxc = ']';
    } else {
        printf("Fora de intervalo\n");
        return 0;
    }

    printf("Intervalo %c%d,%d%c\n", minc, min, max, maxc);
    

    return 0;
}