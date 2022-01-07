#include <iostream>
using namespace std;

int main() { 
int N, soma = 0; 
	
	cin >> N; 
	
	for(int i = 1; i <= N; i++){
		int L, C;
		cin >> L >> C;
		
		if( L > C) 
    soma += C;
	}
	
	cout << soma << endl; 


return 0;
}