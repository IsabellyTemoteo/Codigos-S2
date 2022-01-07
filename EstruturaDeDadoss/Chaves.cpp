#include <iostream>
#include <stack>
using namespace std;
int main()
{
  int n;
  cin >> n;
 
  int TAM = 101;
  char frase[TAM];
  string total;
 
  for(int i = 0; i <= n; i++){
  cin.getline(frase, TAM);
  total += frase;
  }

  bool ok = true; 
  stack<char> pilha;
	for(int i = 0; i < (int)total.size();i++){
		if(total[i] == '{'){ 
			pilha.push('{');
		}else if(total[i] == '}'){ 
			if(pilha.empty()){ 
				ok = false;
				break;
			}else{
				pilha.pop(); 
			}
		}
	}

	if(!pilha.empty()){
		ok = false;
	}

	if(ok){
		cout<<"S\n";
	}else{
		cout<<"N\n";
	}

  return 0;
}
