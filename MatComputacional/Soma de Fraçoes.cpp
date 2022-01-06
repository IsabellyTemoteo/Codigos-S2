#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int a, b, c, d;
  cin >> a >> b >> c >> d;

  long long int resa, resb, A, B;
  resa = (a*d) + (c*b);
  resb = b*d;
  A = resa;
  B = resb;

  long long int res1, res2, teste;
  while (B != 0){
  teste = A % B;
  A = B;
  B = teste;
  }
  
  res1 = resa / A;
  res2 = resb / A;

  cout << res1 << " " << res2 << endl;

return 0; }