#include <iostream>
using namespace std;
 
int main() {
 	int n;
 	int i;
 	cin >> n; 
 	i = 1;

 	for (i; i<=n; i++){
 		cout << i << " " << i*i << " " << i*i*i << endl;
 		cout << i << " " << (i*i) + 1 << " " << (i*i*i) + 1 << endl;
 	}


    return 0;
}