// Isabelly Temoteo ＞▽＜

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a, b, c, d, e, f, g;
  cin >> a >> b >> c >> d >> e >> f >> g;

  //usar: f, d, e = ref;

  int soma_1, soma_2, soma_3;
  soma_1 = c - f - e;
  soma_2 = b - d - f; 
  soma_3 = a - d - e;

  int soma_total;
  soma_total = soma_1 + soma_2 + soma_3 + g + d + e + f;

  if( soma_total == n ){
      cout << "N\n";
  }
  else{
      cout << "S\n";
  }

  return 0;
}