#include <iostream>
using namespace std;

int main () {

    int N;
    cin >> N;

    int  i, j, L[N] , C[N];

    //RECEBENDO A MATRIZ
    int matriz[N][N];
    for ( i = 0; i < N; i++){
      for ( j = 0; j < N; j++){
      cin >> matriz[i][j];
      }
    }
    
    int  Dig1 = 0, Dig2 = 0;

    //INICIALIZANDO VETORES DE SOMA COM 0
    for (i = 0; i < N; i++){
        L[i] = 0;
        C[i] = 0;
    }

    //SOMANDO LINHAS
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++){
            L[i] += matriz[i][j];
        }
    }

    //SOMANDO COLUNAS
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++){
            C[i] += matriz[j][i];
        }
    }

    //SOMANDO A DIAGONAL1
    for (i = 0; i < N; i++) {
        Dig1 += matriz[i][i];
    }
    
    //SOMANDO A DIAGONAL2
    for (i = 0; i < N; i++) {
        for(j = 0; j < N; j++){
            if(j==(N-1)-i){
                Dig2 += matriz[i][j];
            }
        }
    }

    //CONFERINDO SE O QUADRADO É MÁGICO

    int nmagico = 1;
    if (Dig1 != Dig2){
        nmagico= 0;
    }
    for (i = 0; i < N; i++){
        if (L[i] != C[i]){
            nmagico = 0;
        }
    }
    for (i = 0; i < N-1; i++){
        if (L[i] != L[i+1] || C[i] != C[i+1]){
            nmagico = 0;
        }
    }
    if (L[0] != Dig1){
        nmagico = 0;
    }
    if (nmagico == 0){
        cout << -1 << endl;
    }
    else {
        cout << Dig1 << endl;
    }

    return 0;


}