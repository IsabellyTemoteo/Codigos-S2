#include <bits/stdc++.h>
using namespace std;
#define MIN 0
#define MAX 100
#define MAXN 200

int main(){
  int n;
  cin >> n;

  int notas[MAXN];
  for( int i = 0; i < n; i++ ){
  cin >> notas[i];
  }

  int som, max = 0,maxnota = 0;
  for( int i = 0; i <= MAX; i++ ){
  som = 0;
  for( int j = 0; j < n; j++ )
    if( notas[j] == i ){
    som++;
    }
    if( som >= max ){
    max = som;
    maxnota = i;
    }
  }

  cout << maxnota << endl;

  return 0;
}
