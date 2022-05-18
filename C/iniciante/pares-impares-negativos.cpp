#include <stdio.h>
 
int main() {
    int entrada[5] = {0, 0, 0, 0, 0};
    int par= 0;
    int impar = 0;
    int positivo = 0; 
    int negativo = 0;

    for (int i = 0; i<5; i++){
        scanf("%d", &entrada[i]);
        if ((entrada[i]%2) == 0){
            par++;
        } else {
            impar++;
        }

        if (entrada[i] > 0){
            positivo++;
        } else if (entrada[i] < 0){
            negativo++;
        }
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);


    return 0;
}