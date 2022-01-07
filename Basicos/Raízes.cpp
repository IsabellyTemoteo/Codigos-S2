#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
int N, i;
cin >> N;
float Num[N];
	
for ( i = 0; i < N; i++ ){
cin >> Num[i];
}
	
for ( i = 0; i < N; i++ ){
cout <<  fixed << setprecision(4);
cout << sqrt(Num[i]) << endl;
}

return 0;}