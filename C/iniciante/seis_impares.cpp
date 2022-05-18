#include <stdio.h>
 
int main() {
    int x = 0;
    scanf("%d", &x);
    if ((x%2) == 0){
        x = x + 1;
    }
    for (int i = 0; i<6; i++){
        printf("%d\n", x + (i * 2));
    }

    return 0;
}