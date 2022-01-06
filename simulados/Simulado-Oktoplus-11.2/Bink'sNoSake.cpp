#include <bits/stdc++.h>
using namespace std;

int main(){  
  int n;
  cin >> n;

  int t;
  long long int x;
  set<int>producoes;

  for(int i = 0; i < n; i++){
    cin >> t;
    cin >> x;

    switch(t){
      case 1:
      producoes.insert(x);
      break;

      case 2:
      if(producoes.find(x) != producoes.end()){
      producoes.erase(x);
      cout << "SIM\n";
      }
      else{
        cout << "NAO\n";
      }
      break;
    }
  }
  
  return 0;
} 