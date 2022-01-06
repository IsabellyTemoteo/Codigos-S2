#include <bits/stdc++.h>
using namespace std;

int main() {
  long long int x, y, m;
  cin >> x >> y >> m;

  long long int soma;
  soma = (x*y)%m;
  cout << soma;
  
  cout << "\n";
  return 0;
}