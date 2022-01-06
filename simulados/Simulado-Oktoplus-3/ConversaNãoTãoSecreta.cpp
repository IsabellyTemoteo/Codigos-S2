#include <bits/stdc++.h>
using namespace std;

int main () {
int m, n; //LINHAS E COLUNAS
  cin >> m >> n; 
int x, y; //COORDENADA MIC
  cin >> x >> y; 
int k; //QUANTIDADE ANDADA
  cin >> k;
    //DIREÇÃO // SOMA SEGUNDOS // POSIÇÃO LINHA  // POSIÇÃO COLUNA
int local, soma = 0, L = 0, c = 0;
for(int i = 0; i < k; i++) {
  cin >> local; //DIREÇÃO PRA ONDE ELES ANDARAM
  switch(local) { //"MENU" PARA SABER ONDE ELES ESTÃO APÓS ANDAR
  case 1: //NORTE
    c++; 
    break;
  case 2: //SUL
    c--;
    break;
  case 3: //LESTE
    L++;
    break;
  case 4: //OESTE
    L--;
    break;
  }
    
  if (L >= x - 1 &&  L <= x + 1 && c >= y - 1 &&  c <= y + 1) soma++;
}

  cout << soma << "\n";

return 0; }
