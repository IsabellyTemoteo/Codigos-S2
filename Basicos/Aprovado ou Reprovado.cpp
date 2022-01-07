#include <iostream> 
using namespace std;
 
int main(){
  
  float A, B; 
  
  cin >> A >> B; 
  
  if( (A+B)/2 >= 7) 
	  cout << "Aprovado\n";
  else if ( (A+B)/2 >= 4 && (A+B)/2 < 7)
	  cout << "Recuperacao\n";
  else cout << "Reprovado\n";
  
  return 0;
}