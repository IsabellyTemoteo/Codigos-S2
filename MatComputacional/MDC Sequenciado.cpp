#include <iostream>
using namespace std;

int mdc(int a, int b){
  return (b == 0 ? a : mdc(b, a%b)); 
}

int main(){
  int n;
  cin >> n;
  long int num[n], savemdc;

  for(int i = 0; i < n; i++){
    cin >> num[i];
  }

  for(int i = 0; i < n; i++){

    if(i == 0){
    savemdc = mdc(num[i], num[i+1]);
    }

    else{
      savemdc = mdc(savemdc, num[i]);
    }

  }

  cout << savemdc << endl;

	return 0;
}