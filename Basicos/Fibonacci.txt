#include <iostream>
using namespace std;
int main(){
	
	int N;
	cin >> N;
	
	int a = 1, b = 1, soma = 0;
	int i;
	
    for(i = 2; i <= N; i++){                                        
    	soma = a + b;                    
    	a = b;                           
    	b = soma;                           
    }      
	
	cout << b << endl;
   

return 0;}