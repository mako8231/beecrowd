#include <stdio.h>
 
int main() {
    //int horas[24] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
    int inicio_horas, inicio_minutos, termino_horas, termino_minutos = 0;
    int tempo_minutos_inicio, tempo_minutos_termino, tempo_total_horas, tempo_total_minutos = 0;
    scanf("%d%d%d%d", &inicio_horas, &inicio_minutos, &termino_horas, &termino_minutos);

    //processamento de horas 
    tempo_minutos_inicio = inicio_horas * 60;
    tempo_minutos_termino = termino_horas * 60; 
    //processamento de minutos 
    tempo_minutos_inicio += inicio_minutos; 
    tempo_minutos_termino += termino_minutos;

    if (tempo_minutos_inicio < tempo_minutos_termino){
        int tempo_total = tempo_minutos_termino - tempo_minutos_inicio;
        tempo_total_horas = tempo_total/60;
        tempo_total_minutos = tempo_total%60;
    } else if (tempo_minutos_inicio > tempo_minutos_termino){
        int tempo_total = tempo_minutos_inicio - tempo_minutos_termino;
        tempo_total = (24 * 60) - tempo_total;
        tempo_total_horas = tempo_total/60;
        tempo_total_minutos = tempo_total%60;    
    } else if (tempo_minutos_inicio == tempo_minutos_termino){
        tempo_total_horas = 24;
        tempo_total_minutos = 0; 
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_total_horas, tempo_total_minutos);
    

   return 0;
}

