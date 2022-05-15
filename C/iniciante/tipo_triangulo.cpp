#include <stdio.h>
#include <math.h>

void selection_sort(float vetor[3]);

int main() {
    float input[3] = {0,0,0}; //a,b,c
    for (int i = 0; i<3; i++){
        scanf("%f", &input[i]);
    }

    selection_sort(input);
    float a = input[0];
    float b = input[1];
    float c = input[2];

    if (a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");
    } else if(pow(a, 2) == (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO RETANGULO\n");
    } else if(pow(a, 2) > (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO OBTUSANGULO\n");
    } else if(pow(a, 2) < (pow(b, 2) + pow(c, 2))){
        printf("TRIANGULO ACUTANGULO\n");
    }

    if (a == b && a == c && b == c){
        printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || a == c || b == c){
        printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

//{9, 10, 43, 5, 19}
//{43, 10, 9, 5, 19}
//{43, 19, 9, 5, 10}
//{43, 19, 10, 5, 9}
//{43, 19, 10, 9, 5}


void selection_sort(float vetor[3]){
    for (int i = 0; i<3; i++){
        float maior = -0xFFFFF;
        int indice_maior = 0;
        float aux = 0; 
        for (int j = i; j<3; j++){
            if (maior < vetor[j]){
                maior = vetor[j];
                indice_maior = j;
            }
        }
        aux = vetor[i];
        vetor[i] = maior;
        vetor[indice_maior] = aux; 
    }
}