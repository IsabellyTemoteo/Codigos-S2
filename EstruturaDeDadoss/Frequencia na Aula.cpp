#include <iostream>
#include <set>

using namespace std;

int main(){
  int n;
  cin >> n;

  set<int> Frequencia;
	int numero;

	while(n){
		cin >> numero;
		Frequencia.insert(numero);
		n--; }	
	
  cout << Frequencia.size() << "\n";

return 0; }