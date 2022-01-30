#include <iostream>
using namespace std;
bool e_composto[10000100];

void crivo(int n){
    e_composto[1] = 1; 
    for(long long i = 2; i <= n; ++i){
        if(!e_composto[i]){
            for(long long j = 2; j*i <= n; ++j){
                e_composto[i*j] = 1;
            }
        }
    }
    return;
}

int main(){
    long long N, Q;
    cin >> N;
    Q = N;
    crivo(N); 
    for(long long i = 2; i <= Q; ++i){ 
        if (!e_composto[i]) cout << i << " "; 
    }

    return 0;
}