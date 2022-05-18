#include <stdio.h>

int main() {
    int entrada[5] = {0, 0, 0, 0, 0};
    int pares = 0;
    for (int i = 0; i<5; i++){
        scanf("%d", &entrada[i]);
        if ((entrada[i] % 2) == 0){
            pares ++; 
        }
    }    

    printf("%d valores pares\n", pares);


    return 0;
}