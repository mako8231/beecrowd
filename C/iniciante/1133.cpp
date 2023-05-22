#include <iostream>
 
using namespace std;
 
int main() {
 	int x;
 	int y;
 	int i; 
 	int lim_sup;
 	int lim_inf;

 	cin >> x; 
 	cin >> y;

 	if (x > y){
 		lim_sup = x;
 		lim_inf = y;
 	} else {
 		lim_sup = y;
 		lim_inf = x;
 	}

 	for (i = lim_inf + 1; i<lim_sup; i++){
 		if (i % 5 == 2 || i % 5 == 3){
 			cout << i << endl;
 		}
 	}
 
    return 0;
}