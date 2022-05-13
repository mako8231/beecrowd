#include <stdio.h>
 
int main() {
    int vetor[3] = {0, 0, 0};
    int maiores[3] = {0, 0, 0};
    for (int i = 0; i<3; i++){
        scanf("%d", &vetor[i]);
        maiores[i] = vetor[i];
    }

    //{43, 22, 12, 90, 44}
    //{12, 22, 43, 90, 44}
    //{12, 22, 43, 90, 44}
    //{12, 22, 43, 44, 90}
    
    for (int i = 0; i<3; i++){
        int menor = 0xFFFFF;
        int menor_indice = 0;
        int aux = 0;
        int topo = i; 
        for (int j = topo; j<3; j++){
            if (menor > maiores[j]){
                menor = maiores[j];
                menor_indice = j;
            }
        }
        if (menor_indice != topo){
            aux = maiores[topo];
            maiores[topo] = menor;
            maiores[menor_indice] = aux;
        } 
    }

    printf("%d\n", maiores[0]);
    printf("%d\n", maiores[1]);
    printf("%d\n", maiores[2]);
    printf("\n");
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    

    return 0;
}