#include <stdio.h>
 
int main() {
    char * nome; 
    double montante = 0.0; 
    double salario = 0.0;
    
    scanf("%s%lf%lf", &nome, &salario, &montante);
    printf("TOTAL = R$ %0.2lf\n", salario + (montante * 0.15));

    return 0;
}