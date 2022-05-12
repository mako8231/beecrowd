#include <stdio.h>
 
int main() {
    int codPeca1, codPeca2, qntPeca1, qntPeca2 = 0;
    double valUnitaria1, valUnitaria2 = 0.0;

    scanf("%d%d%lf", &codPeca1, &qntPeca1, &valUnitaria1);
    scanf("%d%d%lf", &codPeca2, &qntPeca2, &valUnitaria2);

    printf("VALOR A PAGAR: R$ %0.2lf\n", (qntPeca1 * valUnitaria1) + (qntPeca2 * valUnitaria2));
 
    return 0;
}