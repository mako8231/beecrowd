#include <stdio.h>
 
int main() {
    int limite_inferior = 0; 
    int limite_superior = 0;
    int aux = 0;
    int contador = 0;
    int soma = 0;

    scanf("%d%d", &limite_inferior, &limite_superior);
    if (limite_inferior > limite_superior){
        aux = limite_inferior;
        limite_inferior = limite_superior;
        limite_superior = aux;
    } 

    if ((limite_inferior % 2) == 0){
        limite_inferior -= 1;
    }


    for (int i = limite_inferior + 2; i<limite_superior; i = i + 2){
        soma += i; 
    }

    printf("%d\n", soma);

    return 0;
}