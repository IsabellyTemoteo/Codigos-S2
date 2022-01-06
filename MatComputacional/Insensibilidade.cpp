#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int n;
  cin >> n;

	long long int X0, X1, Y0, Y1, soma = 0; 	
	for(int i = 0; i < n; i++){
		cin >> X0 >> Y0 >> X1 >> Y1;
		soma += (X0 - X1) * (X0 - X1) + (Y0 - Y1) * (Y0 - Y1);
	}

	cout << soma << endl;
	return 0;
}
