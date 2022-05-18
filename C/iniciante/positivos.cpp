#include <stdio.h>
 
int main() {
    float numeros[6] = {0,0,0,0,0,0};
    int pares = 0;
    for (int i = 0; i<6; i++){
        scanf("%f", &numeros[i]);
        if (numeros[i] > 0){
            pares++;
        }
    }

    printf("%d valores positivos\n", pares);
    return 0;
}