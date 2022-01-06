#include <bits/stdc++.h>
using namespace std;

int main() {

 string nome1, nome2;
 cin >> nome1 >> nome2;

if( nome1 != "Reluew" || nome2 != "Markinhos"){
  cout << "Nao eh possivel descriptografar!\n";
  return 0;
}
  int n;
  cin >> n;

  string frase;
  cin >> frase;

  int valor[frase.size()];
  string save;

  for(int i = 0; i < frase.size(); i++){
    valor[i] = int(frase[i]) + n;
    save += char(valor[i]);
  }

  cout << save;

  cout << "\n";
  return 0;
}