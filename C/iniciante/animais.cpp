#include <stdio.h>
#include <string.h> 

int main() {
    char  entrada_1[15];
    char  entrada_2[15];
    char  entrada_3[15];

    scanf("%s%s%s", &entrada_1, &entrada_2, &entrada_3);
    if (strcmp(entrada_1, "vertebrado") == 0){
        
        if (strcmp(entrada_2, "ave") == 0){
            if (strcmp(entrada_3, "carnivoro") == 0){
                printf("aguia\n");
            } else if (strcmp(entrada_3, "onivoro") == 0){
                printf("pomba\n");
            }
        } else if (strcmp(entrada_2, "mamifero") == 0){
            if (strcmp(entrada_3, "onivoro") == 0){
                printf("homem\n");
            } else if (strcmp(entrada_3, "herbivoro") == 0){
                printf("vaca\n");
            }
        } 
    } else if (strcmp(entrada_1, "invertebrado") == 0){
        if (strcmp(entrada_2, "inseto") == 0){
            if (strcmp(entrada_3, "hematofago") == 0){
                printf("pulga\n");
            } else if (strcmp(entrada_3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        } else if (strcmp(entrada_2, "anelideo") == 0){
            if (strcmp(entrada_3, "hematofago") == 0){
                printf("sanguessuga\n");
            } else if (strcmp(entrada_3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}