#include <iostream>
#include <iomanip>
using namespace std;

int main() {

char LETRA;
  cin >> LETRA;

double N1, N2;
  scanf("%lf %lf", &N1, &N2);

double res = 0;

if ( LETRA == 'M'){
  res = N1 * N2;
}

else if ( LETRA == 'D'){
  res = N1 / N2;
}

cout << fixed << setprecision(2) << res << "\n";

return 0;
}