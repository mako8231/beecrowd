#include <iostream>
#include <stdint.h>
#include <sstream>

using namespace std;

int main(){
	uint64_t entradas[2];
	uint64_t saida; 
	int i = 0;
	string buffer;
	string palavra; 
	while(getline(cin, buffer)){
		//Separar as linhas 
		stringstream ss(buffer);
		while (ss >> palavra){
			entradas[i] = stoll(palavra);
			i++;
		}

		saida = entradas[0] ^ entradas[1];
		cout << saida << endl;
		i = 0;
	}
	return 0;
}