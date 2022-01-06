#include <bits/stdc++.h>
using namespace std;

int main(){  
  int n,x;
  cin >> n;
  int soma = 0;

  stack<int>inteiros;

  for(int i = 0; i < n; i++){
    cin >> x;
    if(x == 0){
      soma -= inteiros.top();
      inteiros.pop();
    }
    else{
      inteiros.push(x);
      soma += x;
    }
  }

  cout << soma << endl;

  return 0;
} 