#include <bits/stdc++.h>
using namespace std;

int main(){
    int quant;
    cin >> quant;

    int num[quant];
    int save[quant];
    for(int i = 0; i < quant; i++){
      cin >> num[i];
    }

    int soma = 0;
    for(int i = 0; i < quant-1; i++){
      if(num[i+1] - num[i] >= 10){
        soma += 10;
      }
      else{
        soma += abs((num[i+1] - num[i]));
      }
    }

    cout << soma+10 << "\n";

return 0; }