#include <iostream>
 
using namespace std;
 
int main() {
 	int x;
 	int y;
 	int sum;

 	cin >> x; 
 	cin >> y;

 	if (x > y){
 		for (y; y<=x; y++){
 			if (y % 13 == 0){
 				sum += 0;
 			} else {
 				sum += y;
 			}
 		}
 	} else {
 		for (x; x<=y; x++){
 			if (x % 13 == 0){
 				sum += 0;
 			} else {
 				sum += x;
 			}
 		}
 	}
 	
 	cout << sum << endl;
    return 0;
}