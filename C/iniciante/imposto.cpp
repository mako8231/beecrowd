#include <stdio.h>
 
int main() {
    float renda, taxa = 0.0;
    scanf("%f", &renda);

    if (renda >= 0 && renda <= 2000.00){
        printf("Isento\n");
        return 0;
    } else if (renda > 2000.00 && renda <= 3000.00){
        taxa = ((renda - 2000)*0.08);
    } else if (renda > 3000.00 && renda <= 4500.00){
        taxa = (1000 * 0.08) + ((renda - 3000)*0.18);
    } else if (renda > 4500.00){
        taxa = (1500 * 0.18) + (1000 * 0.08) + ((renda - 4500)*0.28);
    }

    printf("R$ %0.2f\n", taxa);

    return 0;
}