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
    if(e_primo(n)){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }

}