#include <stdio.h>
 
int main() {
    int leitor[10000];
    int limite = 0;
    int dentro = 0; 
    int fora = 0;
    int intervalo[2] = {10, 20};

    scanf("%d", &limite);
    for (int i = 0; i<limite; i++){
        scanf("%d", &leitor[i]);
        if (leitor[i] >= intervalo[0] && leitor[i] <= intervalo[1]){
            dentro += 1;
        } else {
            fora += 1;
        }
    }

    printf("%d in\n", dentro);
    printf("%d out\n", fora);
    
    return 0;
}