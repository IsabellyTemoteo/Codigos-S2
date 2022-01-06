#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, d, k, p;
  cin >> l >> d >> k >> p;

  int resp = 0;
  resp += k * l;
  resp += (l/d) * p;

  cout << resp;

  cout << "\n";
  return 0;
}