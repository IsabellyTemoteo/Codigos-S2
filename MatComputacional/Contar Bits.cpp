#include <bits/stdc++.h>
using namespace std;
unsigned long long int somaDe1;

unsigned long long int toBinary(int num)
{
    unsigned long long int rem;
    if (num <= 1)
        {
            if(num == 1) somaDe1++;
            return num;
        }
    rem = num % 2;
    toBinary(num / 2);
    if(rem == 1) somaDe1++;
    return rem;
}

int main() {
  unsigned long long int x;
  cin >> x;
  toBinary(x);

  cout << somaDe1 << "\n";

return 0;
} 