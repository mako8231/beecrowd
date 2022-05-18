#include <stdio.h>
 
int main() {
    char regioes[9][30] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte", "DDD nao cadastrado"};
    int reg_pos = 0;
    int ddd = 0; 

    scanf("%d", &ddd);

    switch (ddd)
    {
    case (61):
        reg_pos = 0;
        break;
    
    case (71):
        reg_pos = 1;
        break;

    case (11):
        reg_pos = 2;
        break;
    
    case (21):
        reg_pos = 3;
        break; 

    case (32):
        reg_pos = 4;
        break;
    
    case (19):
        reg_pos = 5;
        break;
    
    case (27):
        reg_pos = 6;
        break;

    case (31):
        reg_pos = 7;
        break; 

    default:
        reg_pos = 8;
        break;
    }

    printf("%s\n", regioes[reg_pos]);

    return 0;
}