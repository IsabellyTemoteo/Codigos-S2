#include <iostream>
#include <algorithm>
using namespace std;

int main(){

//INICIALIZEI
    int N, cont = 0;
    cin >> N;

    int Tam[N], i, Cpy[N];

//RECEBI VALORES E CRIEI UM CÓPIA DO VETOR
        for ( i = 0; i < N; i++){
            cin >> Tam[i];
            Cpy[i] = Tam[i];
        }

//ORDENEI A CÓPIA EM ORDEM CRESCENTE
    sort(Cpy, Cpy+N);

    int nsave[N];

//INICIEI TODOS OS VALORES DE ONDE VOU SALVAR COMO 0
    for ( i = 0; i < N; i++){
      nsave[i] = 0;

    }

//COMPAREI A CÓPIA COM A ORIGINAL
        for ( i = 0; i < N; i++){
            if(Tam[i] != Cpy[i]){
                cont++;
                nsave[i] = Tam[i];
            }
            else;
        }

//IMPRIMI A QUANTIA DE DIFERENTES
        cout << cont << endl;
//ORDENEI NSAVE
sort(nsave, nsave+N);

//IMPRIMI OS DESIGUAIS
        for ( i = 0; i < N; i++){
            if( nsave[i] != 0){
                cout << nsave[i] << " ";
            }
        }
        cout << "\n";

return 0; }