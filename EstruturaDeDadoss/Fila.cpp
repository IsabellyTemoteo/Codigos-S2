#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
vector<int> Fila;
int i, N, M;
cin >> N;
for ( i = 0; i < N; i++){
  int x;
  cin >> x;
  Fila.push_back(x);
}
cin >> M;
for ( i = 0; i < M; i++){ 
 int y;
 cin >> y;
 for ( int j = -1; j < N; j++){
 if ( y == Fila[j]){
 Fila.erase (Fila.begin() + j);
 }
 }
}
for ( i = 0; i < Fila.size(); i++){ 
  cout << Fila[i] << " ";
}

cout << "\n";

return 0;}
