#include <iostream>
 
using namespace std;
 
int main() {
 	int executando;
 	int entrada; 
 	//alcool 1, gasolina 2, disel 3
 	int combustivel[3];
 	executando = true;

 	//inicializar 
 	combustivel[0] = 0;
	combustivel[1] = 0;
 	combustivel[2] = 0;


 	while(executando){
 		cin >> entrada; 
 		switch(entrada){
 			case 1:
 				combustivel[0] += 1;
 			break;

 			case 2:
 				combustivel[1] += 1;
 			break;
 			
 			case 3:
 				combustivel[2] += 1;
 			break;
 			
 			case 4:
 				executando = false; 
 			break;

 			default:
 			break;
 				
 		}
 	}

 	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << combustivel[0] << endl;
	cout << "Gasolina: " << combustivel[1] << endl;
	cout << "Diesel: " << combustivel[2] << endl;
    return 0;
}