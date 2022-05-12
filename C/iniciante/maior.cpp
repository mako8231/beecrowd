#include <stdio.h>
#include <math.h> 

int main() {
    int a, b, c = 0; 
    int maiorAB, maior = 0;
    scanf("%d%d%d", &a, &b, &c);
    
    maiorAB = (a + b + abs(a - b))/2;
    maior = (maiorAB + c + abs(maiorAB - c))/2;

    printf("%d eh o maior\n", maior);
 
    return 0;
}