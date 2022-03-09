// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> caixa;

int main() {
  int soma = 0;
  int c, n;
  cin >> c >> n;

  int t, d;
  for(int i = 0; i < c; i++){
    cin >> t >> d;
    caixa.push(t+d);
  }

  int menorTempo = 0;
  for(int i = 0; i < n-c; i++){
    cin >> t >> d;
    menorTempo = caixa.top();
    caixa.pop();

    if(menorTempo - t > 20 ){
      soma++;
    }
    else;
    caixa.push(max(menorTempo, t) + d);
  }

  cout << soma << "\n";
  return 0;
}