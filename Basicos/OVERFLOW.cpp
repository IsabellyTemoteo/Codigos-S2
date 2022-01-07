#include <iostream>
using namespace std;

int main() {

int N;
  cin >> N;
	
int P, Q;
char C;
	
  scanf("%d %c %d", &P, &C, &Q);

int res = 0;

  if ( C == '*'){
res = P * Q;
}

  else if ( C == '+'){
res = P + Q;
}

  if (res <= N){
    cout << "OK\n";
  }

  else if( res > N){
    cout << "OVERFLOW\n";
  }

return 0;
}