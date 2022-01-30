// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;
int n, m; 
long long int resp; 

int main(){
	cin >> n >> m;
	for(int i=1; i<=m; i++){
		int resto=n-i; 
		if(2*m<resto) continue;
		int menor=max(1, resto-m);
		int maior=min(resto-1, m);
		resp+=(maior-menor+1);
	}

	cout << resp;

	return 0;
} 