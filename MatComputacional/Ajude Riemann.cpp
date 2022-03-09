// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;
bool isPrime[12000010];

int main(){
  int n;
  cin >> n;

  for(int i = 0; i < 12000010;i++){
    isPrime[i] = true;
  }

  int soma = 0;
  for(int i = 2; i < 12000010; i++){
    if(isPrime[i] == false)continue;
    soma++;
    if(soma == n){
      cout << i << "\n";
      return 0;
    }
    
    for(int j = 2*i; j < 12000010; j += i){
      isPrime[j] = false;
    }
  }
}