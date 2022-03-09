// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;

int main() {  
  int n, m; 
  cin >> n >> m;

  vector<int> arestas[100001];
  bool revelador = false;

  for(int i = 0; i < m; i++){
    int t, a, b;
    cin >> t >> a >> b;
    
    switch(t){
      case 0: //PERGUNTA - RESPONDER
        for( int i : arestas[a] ){
          if( i == b ){
            revelador = true;
            break;
          }
        }

        if( revelador == true){
          revelador = false;
          cout << 1 << "\n";
        }
        else{
        cout << 0 << "\n";
        }
      break;

      case 1: //CRIANDO PONTE
        arestas[a].push_back(b);
        arestas[b].push_back(a);
      break;
    }
  }

  return 0;
}