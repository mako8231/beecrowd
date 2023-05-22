#include <iostream>
#define COLUNA 4 
using namespace std;
 
int main() {
 	int n;
 	int i = 0;
 	int j = 1;

 	cin >> n; 

 	for (i; i<n; i++){
 		for (j; j<=(i+1)*COLUNA; j++){
 			if (j == (i+1) * COLUNA){
 				cout << "PUM";
 			} else {
 				cout << j << " ";
 			}
 		}
 		cout << endl; 
 	}

    return 0;
}