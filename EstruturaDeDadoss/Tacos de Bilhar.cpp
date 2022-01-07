#include <iostream>
#include <set>
using namespace std;

int main(){
  int n;
  cin >> n;

  int x, soma = 0;
  set<int> tacos;

  for(int i = 0; i < n; i++){
    cin >> x;
      if(tacos.find(x) == tacos.end()){
        tacos.insert(x);
        soma += 2; }
      else{
        tacos.erase(x); }
}

    cout << soma << "\n";
    return 0;
}
