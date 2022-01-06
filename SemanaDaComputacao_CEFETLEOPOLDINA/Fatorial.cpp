#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, n; 
	cin >> n;

	long fat = 1;
	for (i = 1; i <= n; i++) {
		fat = fat * i;
	}

	cout << fat << endl;;

	return 0;
} 