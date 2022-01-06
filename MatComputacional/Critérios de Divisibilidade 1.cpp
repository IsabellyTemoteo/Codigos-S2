#include <bits/stdc++.h>
using namespace std;

int main() {
  string num;
  getline(cin, num);

  if((num.back() - 48) % 2 == 0){
    cout << "S" << "\n";
  }
  else{
    cout << "N" << "\n";
  }

  long int soma = 0;
  for(int i = 0; i < num.size(); i++){
    soma += num[i];
  }
  if(soma%3 == 0){
    cout << "S" << "\n";
  }
  else{
    cout << "N" << "\n";
  }

  if(num.back() == '0' || num.back() == '5'){
    cout << "S" << "\n";
  }
  else{
    cout << "N" << "\n";
  }

  return 0;
}