#include <iostream>
using namespace std;

int main(){

long N;
long long soma = 0;
cin >> N;

for( int  i = N; i >= 0; i--){
  soma = soma + i;
}

cout << soma;


cout << "\n";
return 0;}