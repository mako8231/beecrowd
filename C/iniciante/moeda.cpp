#include <stdio.h>
#include <math.h> 
#include <cmath>
using namespace std;

int main() {
    double valor = 0.0;
    int parte_inteira = 0;
    double parte_decimal = 0.0;   

    int nota100, nota50, nota20, nota10, nota5, nota2 = 0;
    int moeda1, moeda50, moeda25, moeda10, moeda05, moeda01 = 0;
    int valor_cedula, valor_moeda = 0;


    scanf("%lf",&valor);
    parte_inteira = (int)(valor);
    //printf("%d\n", parte_inteira);
    parte_decimal = (valor - parte_inteira) * 100;
    

    valor_cedula = parte_inteira;
    valor_moeda = parte_decimal;
    //printf("%d\n", valor_moeda);

    nota100 = valor_cedula/100;
    valor_cedula = valor_cedula%100;
    nota50 = valor_cedula/50;
    valor_cedula = valor_cedula%50;
    nota20 = valor_cedula/20;
    valor_cedula = valor_cedula%20;
    nota10 = valor_cedula/10;
    valor_cedula = valor_cedula%10;
    nota5 = valor_cedula/5;
    valor_cedula = valor_cedula%5;
    nota2 = valor_cedula/2;
    valor_cedula = valor_cedula%2;
    moeda1 = valor_cedula/1;
    valor_cedula = valor_cedula%1;
    
    
    moeda50 = valor_moeda/50;
    valor_moeda = valor_moeda%50;
    moeda25 = valor_moeda/25;
    valor_moeda = valor_moeda%25;
    moeda10 = valor_moeda/10;
    valor_moeda = valor_moeda%10;
    moeda05 = valor_moeda/5;
    valor_moeda = valor_moeda%5;
    moeda01 = valor_moeda/1;
    valor_moeda = valor_moeda%1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda05);  
    printf("%d moeda(s) de R$ 0.01\n", moeda01);  
    
    

    return 0;
}
