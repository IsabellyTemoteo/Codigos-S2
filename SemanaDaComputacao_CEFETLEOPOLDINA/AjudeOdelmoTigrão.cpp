// Isabelly Temoteo ＞▽＜

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, p;
  cin >> n >> m >> p;

  int soma = (100*m)/n;

  if( soma >= p ) {
    cout << "UdiCity esta segura!!!\n";
  }
  else{
    cout << "UdiCity esta em perigo, vamos de LockDalson!!!\n";
  }

  return 0;
} 