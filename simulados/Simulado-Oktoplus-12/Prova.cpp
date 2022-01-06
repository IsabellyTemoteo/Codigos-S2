#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int>num;
  for(int i = 0; i < 3; i++){
    int x;
    cin >> x;
    num.push_back(x);
  }
  sort(num.begin(), num.end());
  cout << num[1] + num[2];

return 0; } 