#include <stdio.h>
 
int main() {
    float x, y;
    int indice = 0;
    char opcoes[7][10] = {"Q1", "Q2", "Q3", "Q4", "Origem", "Eixo X", "Eixo Y"};
    scanf("%f%f", &x, &y);      

    if (x > 0 && y > 0){
        indice = 0;
    } else if (x > 0 && y < 0){
        indice = 3;
    } else if (x < 0 && y > 0){
        indice = 1;
    } else if (x < 0 && y < 0){
        indice = 2;
    } else if (x == 0 && y == 0){
        indice = 4;
    } else if (x == 0 && y != 0){
        indice = 6;
    } else if (x != 0 && y==0){
        indice = 5;
    }

    printf("%s\n", opcoes[indice]);


    return 0;
}