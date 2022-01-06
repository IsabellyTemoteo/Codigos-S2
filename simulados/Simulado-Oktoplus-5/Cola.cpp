#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector< string> frases;
  int soma = 0;

  for(int i = 0; i < n; i++){
    string f;
    cin >> f;
    frases.push_back(f);
  }

  sort(frases.begin(), frases.end());
  bool conf = 0;

  for(int i = 0; i < n; i++){
    if( frases[i] == frases[i+1] ){
      soma++;
      if( conf == 0 ){
        soma++;
        conf = 1;
      }
    }

    if( frases[i] != frases[i+1]) {
      conf = 0;
    }
  }

  cout << soma << endl;

  return 0;
}