#include <iostream> 
using namespace std;
 
int main(){
  
  int Bino, Cino, soma; 
  
  cin >> Bino >> Cino; 
  soma = Cino + Bino;
	
  if (soma % 2 == 0)
  cout << "Bino\n"; 
  else
  cout << "Cino\n";   
	
  return 0;
}