#include <stdio.h>
 
int main() {
    char month[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int month_index = 0;
    scanf("%d", &month_index);

    printf("%s\n", month[month_index - 1]);

    return 0;
}