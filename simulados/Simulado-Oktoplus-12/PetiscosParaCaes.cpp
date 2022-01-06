#include <iostream>
using namespace std;

int main() {
  int S, M, L;
  cin >> S >> M >> L;

  int soma = 0;
  soma = 1 * S + 2 * M + 3 * L;

  if(soma >= 10){
    cout << "happy\n";
  }
  else{
    cout << "sad\n";
  }
return 0;
} 