#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;

  int temp;
  set<int> al, bia;
  vector<int> conj, conj2;

  for(int i = 0; i < a; i++){
    cin >> temp;
    if( al.find(temp) == al.end() ){
      conj.push_back(temp);
    }
      al.insert(temp);
    }

    for(int i = 0; i < b; i++){
      cin >> temp;
      if(bia.find(temp) == bia.end()){
        conj2.push_back(temp);
      }
      bia.insert(temp);
    }

    for(int i = 0; i < conj2.size(); i++){
      if(al.find(conj2[i])!= al.end()){
        conj2.erase(conj2.begin()+i);
        i--;
      }
    }
  
    for(int i = 0; i < conj.size(); i++){
      if(bia.find(conj[i]) != bia.end()){
        conj.erase(conj.begin()+i);
        i--;
      }
    }

    if(conj.size() >= conj2.size()){
      cout << conj2.size();
    }
    else{
        cout << conj.size();
    }
    return 0;
}
