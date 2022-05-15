#include <stdio.h>
 
int main() {
    //int horas[24] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int inicio, termino = 0;
    int tempo_total = 0;
    scanf("%d%d", &inicio, &termino);

    if (inicio > termino){
        int tempo_1; 
        int tempo_2 = termino + 1; 

        tempo_1 = 23 - inicio;
        tempo_total = tempo_1 + tempo_2; 
    } else if (inicio < termino){
        tempo_total = (termino - inicio); 
    } else if (inicio == termino){
        tempo_total = 24; 
    }

    printf("O JOGO DUROU %d HORA(S)\n", tempo_total);
    

   return 0;
}

