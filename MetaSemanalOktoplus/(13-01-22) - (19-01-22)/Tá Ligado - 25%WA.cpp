// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  map<int, int> pontes;
  vector<int> respostas;

  while( m > 0 ){
    m--;
    int t, a, b;
    cin >> t >> a >> b;

    switch(t){
      case 0:
        if(pontes.find(a) != pontes.end()){
            if(pontes[a] == b )
            respostas.push_back(1);
            else
            respostas.push_back(0);;
          
        }
        else{
            respostas.push_back(0);
        }
      break;

      case 1:
        pontes.insert(make_pair(a,b));
        pontes[a] = b;
        pontes[b] = a;
      break;

    }

  }

  for(int i = 0; i < respostas.size(); i++){
    cout << respostas[i] << "\n";
  }

  cout << "\n";
  return 0;
}