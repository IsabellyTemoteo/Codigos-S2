#include <iostream>
using namespace std;
#define MAX 1000

int main(){
  int N;
  cin >> N;

  int Matriz[MAX][MAX];
  int Linha[MAX], Coluna[MAX];
  int i , j, k, p;
  
  //RECEBENDO O TABULEIRO
  for( i = 0; i < N; i++ )
    for( j = 0; j < N; j++ )
     cin >> Matriz[i][j];

  //SEPARANDO POR LINHAS E COLUNAS E SOMANDO
  for( i = 0; i < N; i++ ){
    Linha[i] = Coluna[i] = 0;
    for( k = 0; k < N; k++ ){
      Linha[i] += Matriz[i][k];
      Coluna[i] += Matriz[k][i];
    }
  }
  int M = -1;

  //UTILIZANDO OPERAÇÃO TERNÁRIA PARA ACHAR A MAIOR SOMA
  for( i = 0; i < N; i++ )
    for( j = 0; j < N; j++ ){
      p = Linha[i] + Coluna[j] - 2 * Matriz[i][j];
      M = M > p ? M : p;
    }

  cout << M << "\n";
  
  return 0;
}