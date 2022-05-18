#include <stdio.h>
 
int main() {
    float entrada[6] = {0, 0, 0, 0, 0, 0};
    float n_positivos[6] = {0, 0, 0, 0, 0, 0};
    int positivos = 0;
    for (int i = 0; i<6; i++){
        scanf("%f", &entrada[i]);
        if (entrada[i] > 0){
            positivos++;
            n_positivos[positivos - 1] = entrada[i];
        }
        
    }

    float media = 0; 
    float soma = 0;
    for (int j = 0; j<positivos; j++){
        soma += n_positivos[j];
    }
    
    media = soma/positivos;

    printf("%d valores positivos\n", positivos);
    printf("%0.1f\n", media);
 
    return 0;
}