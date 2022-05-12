#include <stdio.h>
 
int main() {
    int dias = 0; 
    int dias2, mes, anos = 0; 

    scanf("%d", &dias);

    anos = dias/365;
    mes = (dias%365)/30;
    dias2 = (dias%365)%30;

    printf("%d anos(s)\n", anos);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias2);

    return 0;
}