#include <stdio.h>
 
int main() {
    int cod1, qnt = 0;
    float preco1, total = 0.0;
    
    scanf("%d%d", &cod1, &qnt);

    switch (cod1)
    {
    case 1:
        preco1 = 4.00;
        break;
    case 2:
        preco1 = 4.50;
        break;
    case 3:
        preco1 = 5.00;
        break;
    case 4:
        preco1 = 2.00;
        break;
    case 5:
        preco1 = 1.50;
        break;
    
    default:
        return 0;
        break;
    }

    total = preco1 * qnt;
    printf("Total: R$ %0.2f\n", total);

    return 0;
}