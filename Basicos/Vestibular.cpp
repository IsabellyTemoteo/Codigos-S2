#include <iostream>
using namespace std;
int main(){

	int N;
	cin >> N;

	string Quest, Resp;
  
	int i, acertos = 0;
	
	cin >> Quest;

	cin >> Resp;
	
	for(i = 0; i < N; i++){
	if(Quest[i] == Resp[i]){ 
		acertos++; }
	}
	
	cout << acertos << "\n";

return 0;}