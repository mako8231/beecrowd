#include <stdio.h>
int main() {
    int n = 0;
    scanf("%d", &n);

    for (int i = 2; i<=n; i+=2){
        printf("%d^2 = %d\n",i, i*i);
    }
 
    return 0;
}