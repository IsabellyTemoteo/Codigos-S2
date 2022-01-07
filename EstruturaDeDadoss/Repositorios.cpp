#include <bits/stdc++.h>
using namespace std;

int main() {
  int c, n;
  cin >> c >> n;

  map<int, int> host;
  map<int, int> internet;

  for(int i = 0; i < c; i++){
    int x, y;
    cin >> x >> y;
    host.insert(make_pair(x, y));
  }

  for(int i = 0; i < n; i++){
    int x, y;
    cin >> x >> y;
    internet.insert(make_pair(x, y));

    for(int j = 0; j < c; j++){
      host.find(x);
      if()
    }
  }






  cout << "\n";
  return 0;
}