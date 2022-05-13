#include <stdio.h>
 
int main() {
    float n1, n2, n3, n4 = 0.0;
    float exame, media = 0.0;

    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
    media = ((n1 * 0.2) + (n2 * 0.3) + (n3 * 0.4) + (n4 * 0.1));

    printf("Media: %0.1f\n", media);
    if (media >= 7.0){
        printf("Aluno aprovado.\n");
    } else if (media < 7 && media >= 5.0){
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %0.1f\n", exame);
        media = (media + exame)/2;
        if (media >= 5.0){
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1f\n", media);
    } else {
        printf("Aluno reprovado.\n");
    }

    return 0;
}