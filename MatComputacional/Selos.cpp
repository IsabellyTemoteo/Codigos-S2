#include <iostream>
#include <cmath>
using namespace std;

int main(){
  long long int N;
  cin >> N;

  int Som = 0;
  
  for( int i = 2; i <= sqrt(N); i++){
        if(N%i == 0){
            Som++; }
  }

  if( Som == 0 ){
    cout << "N\n";
  }
  else {
    cout << "S\n";
  }

	return 0;
}