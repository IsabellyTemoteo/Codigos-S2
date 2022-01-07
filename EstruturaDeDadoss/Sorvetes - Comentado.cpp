#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	//PRAIA E SORVETEIROS
	int P, S, i;
	cin >> P >> S;
	//INTERVALO ONDE PASSAM SORVETEIROS
	//PREENCHER VETOR 
	//SE SECOND > FIRST, NAO SALVA ELE
	vector< pair<int, int> > Passagens; //MONTEI UM VECTOR DE PAIR
	pair<int, int> Temp; //UM PAIR PRA SALVAR E ADICIONAR AO VECTOR
	for ( i = 0; i < S; i++) {
	cin >> Temp.first >> Temp.second;	
		if ( Temp.first < Temp.second ){
		Passagens.push_back(Temp); //ADICIONANDO O PAIR AO VECTOR
		 }
	}
	//ORGANIZAR OS VETORES
	sort(Passagens.begin(), Passagens.end()); //ORGANIZANDO
	//PROCURAR OS INTERVALOS
  int U, V; //VARIAVEIS DADAS PELO EXERCICIO PARA SALVAR O INTERVALO
  i = 0; //EVITAR CONFLITOS
	Temp = Passagens[i]; //PAIR RECEBE PASSAGENS[i]
	for ( i = 0; i < S; i++) { 
	U = Passagens[i].first; //SALVANDO A 1 PARTE DO VECTOR 
  V = Passagens[i].second; //SALVANDO A 2 PARTE DO VECTOR
    if(!(U >= Temp.first && V <= Temp.second)){ //COMPARANDO
      if(Temp.second >= U){
      Temp.second = V; }
      else{
      cout << Temp.first << " " << Temp.second << "\n";
      Temp.first = U;
      Temp.second = V;
      }
    }
	}
	
if( Temp.second > P)
				cout << Temp.first << " " << P << "\n\n";
			else
				cout << Temp.first << " " << Temp.second << "\n\n";
        
return 0;}