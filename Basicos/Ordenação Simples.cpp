#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int N;
	cin >> N;
	int Num[N], i;
	
		for ( i = 0; i < N; i++){
		cin >> Num[i];
		}
	
		sort(Num,Num+N);
	
		for(i = 0; i < N; i++){
    	cout << Num[i] << " "; }
	
		cout << "\n";
	

return 0;}