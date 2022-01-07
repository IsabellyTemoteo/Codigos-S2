#include <iostream>

using namespace std;

int main(){
    int N, c=0, cod[10002];

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> cod[i];
    }

    for(int i=0;i<N-2;i++){
        if(cod[i]==1 && cod[i+1]==0 && cod[i+2]==0){
            c++;
        }else{
            continue;
        }
    }

    cout << c;

}