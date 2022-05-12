#include <stdio.h>
 
int main() {
    long int segs = 0;
    long int horas, min, segs2 = 0;

    scanf("%d",&segs);

    horas = segs/3600;
    min = (segs%3600)/60;
    segs2 = segs%60;

    printf("%ld:%ld:%ld\n", horas, min, segs2);

    return 0;
}