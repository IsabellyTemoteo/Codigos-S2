#include <bits/stdc++.h>
using namespace std;
int faixas[100100], premios[100100], ogros[100100], n, m;

int buscab(int x){
  int ini = 0, fim = n, meio;

  while(fim-ini > 1){
    meio=(ini+fim)/2;
    if(faixas[meio] <= x){
      ini = meio; 
    }
    if(faixas[meio] > x) {
     fim=meio;
    }
  }

  return premios[fim-1];
}

int main(){
    cin >> n >> m;

    for(int i = 1; i < n; i++){
        cin >> faixas[i];
    }

    for(int i = 0; i < n; i++){
        cin >> premios[i];
    }
    for(int i = 0; i < m; i++){
        cin >> ogros[i];
    }

    for(int i = 0; i < m; i++){
        cout << buscab(ogros[i]) << " ";
    }

    cout << "\n";
    return 0;
}