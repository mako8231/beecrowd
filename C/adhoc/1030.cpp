#include <iostream>

using namespace std;

typedef struct grupo {
	int tam; 
	int * vet;
} grupo; 

void criarExercito(grupo * g, int tam){
	int i;
	g->vet = (int*)malloc(sizeof(int) * tam);
	for (i = 0; i<tam; i++){
		g->vet[i] = i + 1; 
	}
}

int main(){

}