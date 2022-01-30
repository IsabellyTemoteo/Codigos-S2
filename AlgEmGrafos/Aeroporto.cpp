// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, v, j = 0;
    while(true){
        cin >> a >> v;

        if( a == 0 && v == 0)
            return 0;

        j++;
        
        queue<int> maior;
        vector<int> voos[a+1];
        int x, y, save = 0;

        for(int i = 0; i < v; i++){
          cin >> x >> y;
          voos[x].push_back(y);
          voos[y].push_back(x);
        }

        for(int i = 0; i < a+1; i++){
          if(voos[i].size() > save){
            save = voos[i].size();
          }
        }

        for(int i = 0; i < a+1; i++){
          if(voos[i].size() == save){
            maior.push(i);
          }
        }

        cout << "Teste " << j << "\n";

        while(!maior.empty()){
          cout << maior.front() << " ";
          maior.pop();
        }

       cout << "\n";
    }
    return 0;
}