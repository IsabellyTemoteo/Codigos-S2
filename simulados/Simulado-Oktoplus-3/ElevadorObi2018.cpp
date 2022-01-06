#include <bits/stdc++.h>
using namespace std;

int main(){
    int caixas;
    cin >> caixas;

    int pesos[caixas];
    for(int i = 0; i < caixas; i++){
        cin >> pesos[i];
    }

  sort(pesos, pesos + caixas);

  if (pesos[0] > 8){
        cout << "N" << "\n";
        return 0;
    }
    
  bool resp = 1;
  for(int i = 0; i < caixas-1; i++){
        if((pesos[i+1] - pesos[i]) > 8){
            resp = 0;
            break;
        }
        else;
    }

    if(resp == 0){
        cout << "N" << "\n";
    }
    else{
        cout << "S" << "\n";
    }


return 0; }