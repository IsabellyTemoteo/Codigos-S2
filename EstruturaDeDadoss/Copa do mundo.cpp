#include <bits/stdc++.h>
using namespace std;

int main () {
	int m, n;
  //UTILIZANDO A TABELA ASCII
  //A - 65 B - 66 C - 67 D - 68 E - 69 F - 70  G - 71  H - 72 I - 73 J - 74 K - 75 L - 76 M - 77 N - 78 O - 79 P - 80
	queue<char> oitavas_de_final, quartas_de_final, semifinais;

	for(int i = 0; i < 16; i += 2){
		cin >> m >> n;
		if(m > n){
		  oitavas_de_final.push(65 + i);}
		else{
		  oitavas_de_final.push(66 + i);}	
	}

	for(int i = 0; i < 4; i++){
		cin >> m >> n;
		if(m > n){
			quartas_de_final.push(oitavas_de_final.front());
			oitavas_de_final.pop();
		}		
		else{
			oitavas_de_final.pop();
			quartas_de_final.push(oitavas_de_final.front());				
		}
		oitavas_de_final.pop();		
	}
	
	for(int i = 0; i < 2; i++){
		cin >> m >> n;
		if(m > n){	
			semifinais.push(quartas_de_final.front());
			quartas_de_final.pop();
		}		
		else{
			quartas_de_final.pop();
			semifinais.push(quartas_de_final.front());			
		}
		quartas_de_final.pop();				
	}

	cin >> m >> n;
	if(m > n){ 
  cout << semifinais.front(); }		

	else{
		semifinais.pop();
		cout << semifinais.front();		
	}
	return 0;
}