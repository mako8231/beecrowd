#include <stdio.h>
 
/*
Salário 	            Percentual de Reajuste
0 - 400.00              15%
400.01 - 800.00         12%
800.01 - 1200.00        10%
1200.01 - 2000.00       7%
Acima de 2000.00        4%

	
*/

int main() {
    float salario, reajuste, novo_salario, porcentagem = 0.0;
    scanf("%f", &salario);
    if (salario <= 400.00){
        porcentagem = 0.15;
        reajuste = salario * porcentagem;
        novo_salario += salario + reajuste;
    } else if (salario <= 800.00){
        porcentagem = 0.12;
        reajuste = salario * porcentagem;
        novo_salario = salario + reajuste;
    } else if (salario <= 1200.00){
        porcentagem = 0.10;
        reajuste = salario * porcentagem;
        novo_salario = salario + reajuste;
    } else if (salario <= 2000.00){
        porcentagem = 0.07;
        reajuste = salario * porcentagem;
        novo_salario = salario + reajuste;
    } else if (salario > 2000.00){
        porcentagem = 0.04;
        reajuste = salario * porcentagem;
        novo_salario = salario + reajuste; 
    }

    printf("Novo salario: %0.2f\n", novo_salario);
    printf("Reajuste ganho: %0.2f\n", reajuste);
    printf("Em percentual: %0.0f %\n", porcentagem * 100);
 
    return 0;
}