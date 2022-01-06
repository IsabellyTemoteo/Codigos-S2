#include <bits/stdc++.h>
using namespace std;
set<unsigned long long int>binario;

unsigned long long int toBinary(int num)
{
    unsigned long long int rem;
    if (num <= 1)
        {
            binario.insert(num);
            return num;
        }
    rem = num % 2;
    toBinary(num / 2);
    binario.insert(rem);
    return rem;
}

int main() {
  unsigned long long int x;
  cin >> x;
  toBinary(x);

   if(binario.find(0) != binario.end()){
     cout << "N\n";
   }
   else{
     cout << "S\n";
   }

return 0;
} 