#include <iostream>
using namespace std;

int main() {
  int P;
  int D1, D2;
  cin >> P >> D1 >> D2;
  int soma;
  soma = D1+D2;

  switch(P){
    case 0:
    if(soma%2 == 0){
      cout << 0 << endl;
    }
    else{
      cout << 1 << endl;
    }
    break;

    case 1:
    if(soma%2 == 0){
      cout << 1 << endl;
    }
    else{
      cout << 0 << endl;
    }
    break;

  }

  

return 0;
}