#include <bits/stdc++.h>
using namespace std;

int main(){
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

  int cr = 0;
	cr = max(x1,x2) - min(x1,x2) + max(y1,y2) - min(y1,y2);
  
	cout << cr << "\n";

return 0; }