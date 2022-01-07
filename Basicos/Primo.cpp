#include <iostream>

using namespace std;

bool eh_primo(int x){
	int som = 0;
  bool res;
	for( int i = 1 ; i <= x ; i++){
        if(x % i == 0){
         som++;	
		}
	}
	
	if( som == 2){
	res = true;
	}
	else {
	res = false;
	}
	
return res;}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}