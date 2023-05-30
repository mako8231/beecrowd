#include <iostream>
#include <stdint.h>
#include <sstream>
#include <limits>

using namespace std;

typedef struct grupo {
	int tam; 
	int * vet;
} grupo; 

void criarExercito(grupo * g, int tam){
	int i;
	g->tam = tam; 
	g->vet = (int*)malloc(sizeof(int) * tam);
	for (i = 0; i<tam; i++){
		g->vet[i] = i + 1; 
	}
}

void matarSoldado(grupo * g, int n){
	g->vet[n] = 0;
	for (int i = n; i< g->tam-1; i++){
		g->vet[i] = g->vet[i+1]; 
	}
	g->tam -= 1; 
}

int main(){
	int testes; 
	int i;
  int k;
	int entradas[2];
	string buffer;
	string palavra; 
	cin >> testes;
  //limpar o stdin 
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  i = 0;
	entradas[0] = 0;
  entradas[1] = 0;
  while(i < testes){
    k = 0;
		grupo exercito;
		getline(cin, buffer);
    stringstream ss(buffer);
		while (ss >> palavra){
			//cout << "valor de k: " << k << endl; 
      entradas[k] = stoll(palavra);
			k++;
    }
		//cout << "Saida "<< entradas[0] << " " << entradas[1] << endl;	
		//inicalizar as variáveis do exército 
		criarExercito(&exercito, entradas[0]);
		int pos_soldado = 0;
		int contador = 1;
		while(exercito.tam > 1){
			if (contador == entradas[1]){
				//se o contador for o número do passo
				matarSoldado(&exercito, pos_soldado);
				contador = 1;
			} else {
			  pos_soldado = (pos_soldado + 1)%exercito.tam;
			  contador += 1;
      }
		}
		//quando terminar, exibir o número de caso de testes e o soldado sobrevivente
		cout << "Case " << i + 1 << ": " << exercito.vet[0] << endl;
		//liberar a memória alocada
		//free(exercito.vet);
    i++;		
	}

	return 0;
}
