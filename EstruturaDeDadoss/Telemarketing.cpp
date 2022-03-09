// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;
priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> vendedor;

int main() {
  long n, l;
  cin >> n >> l;

  for(int i = 1; i <= n; i++){
    vendedor.push(make_pair(0, i));
  }

  int atendimentosVendedor[100001];
  memset(atendimentosVendedor, 0, sizeof atendimentosVendedor);

  pair<int,int> topVendedor;
  for(long i = 1; i <= l; i++){
    int x; cin >> x;
    topVendedor = vendedor.top();
    vendedor.pop();
    atendimentosVendedor[topVendedor.second]++;
    vendedor.push(make_pair(x+topVendedor.first, topVendedor.second));
  }
  
  for(long i = 1; i <= n; i++){
    cout << i  << ' ' << atendimentosVendedor[i] << '\n';
  }
  
  return 0;
}