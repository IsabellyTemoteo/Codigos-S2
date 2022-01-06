#include <iostream>
using namespace std;

bool e_primo(long long int n){
    int i;
    if(n == 1) return 0;
    for (int i = 2; i*i <= n;i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    long long int n;
    cin >> n;

    for( int i = 2; i <= n; i++){
    if(e_primo(i)){
        cout << i << " ";
    }else; 
  }

  cout << "\n";
}