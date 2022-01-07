#include <iostream>
#include <cstring>
using namespace std;

int main(){

int N;
cin >> N;

int i, j, NUM[N];

string resultado = "";

  for ( i = 0; i < N; i++){
      cin >> NUM[i];
      resultado = resultado + to_string(NUM[i]);
     }
    
int tam = resultado.size();

  char numeros[tam + 1];
  strcpy(numeros, resultado.c_str());

int save[10] = {0};

  for ( i = 0; i < resultado.size(); i++){
    if ( numeros[i] == '0'){
      save[0]++;
    }
    if ( numeros[i] == '1'){
      save[1]++;
    }
    if ( numeros[i] == '2'){
      save[2]++;
    }
    if ( numeros[i] == '3'){
      save[3]++;
    }
    if ( numeros[i] == '4'){
      save[4]++;
    }
    if ( numeros[i] == '5'){
      save[5]++;
    }
    if ( numeros[i] == '6'){
      save[6]++;
    }
    if ( numeros[i] == '7'){
      save[7]++;
    }
    if ( numeros[i] == '8'){
      save[8]++;
    }
    if ( numeros[i] == '9'){
      save[9]++;
    }
  }

  for ( i = 0; i <= 9; i++)
  cout << i << " - " << save[i] << "\n";



return 0;}