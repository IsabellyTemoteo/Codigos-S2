#include <iostream>
using namespace std;

int main() { 

	int P, R;
	
	cin >> P >> R;
	
	if(P == 1 && R ==1)
	cout << "A\n";
	else if (P == 0 )
	cout << "C\n";
	else if (P == 1 && R == 0)
	cout << "B\n";
	

return 0;
}