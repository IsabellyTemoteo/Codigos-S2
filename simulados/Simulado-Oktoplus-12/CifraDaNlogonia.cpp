#include<bits/stdc++.h>
using namespace std;

vector<int> alfabeto; 
vector<pair<int, int> > vogais;  	
string s;
vector<char> frase_nova;

bool eh_volgal(int i){
	if( i == 'a' - 'a' ||  i == 'e' - 'a' ||  i == 'i' - 'a' || i == 'o' - 'a' || i == 'u' - 'a'){
    return true;
  }	

  return false;
}

int main(){
  cin >> s;
	
	for(int i = 0; i < 26; i++){
		if( i == 'w' - 'a' || i == 'y' - 'a' ) 
      continue;
		alfabeto.push_back(i);

		if(eh_volgal(i)){
			vogais.push_back({alfabeto.size() - 1, i});
		}
	}

	for(int i = 0; i < s.size(); i++){
		if(eh_volgal(s[i] - 'a')){
			frase_nova.push_back(s[i]);
			continue;
		}
		frase_nova.push_back(s[i]);
		int id;
		for(int j = 0; j < alfabeto.size(); j++)
			if(alfabeto[j] == s[i] - 'a') id = j;
		int idesquerda = -500, iddireita = 500;
		for(int j = id; j >= 0; j--){
			if(eh_volgal(alfabeto[j])){
				idesquerda = j;		
				break;	
			}
		}
		for(int j = id; j < alfabeto.size(); j++){
			if(eh_volgal(alfabeto[j])){
				iddireita = j;
				break;
			}
		}
	
		if(id - idesquerda <= iddireita - id) frase_nova.push_back('a'+alfabeto[idesquerda]);
		else frase_nova.push_back('a' + alfabeto[iddireita]);
		
		if(id == alfabeto.size() - 1) frase_nova.push_back(s[i]);
		else{
			for(int j = id + 1; j < alfabeto.size(); j++){
				if(!eh_volgal(alfabeto[j])){
					frase_nova.push_back('a' + alfabeto[j]);
					break;
				}
			}
		}
	}
	

	for(int i = 0; i < frase_nova.size(); i++){
		cout << frase_nova[i];
	}
return 0;
}