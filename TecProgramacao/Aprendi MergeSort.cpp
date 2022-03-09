#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

// função merge_sort que ordena um vector v
void merge_sort(vector<int> &v){
	// se o tamanho de v for 1, retorno a função
	if(v.size()==1) return;
	// se não
	// declaro os vetore u1 e u2
	vector<int> u1, u2;
	// e faço cada um receber uma metade de v
	for(int i=0;i<v.size()/2;i++) u1.push_back(v[i]);
	for(int i=v.size()/2;i<v.size();i++) u2.push_back(v[i]);
	// ordeno u1 e u2
	merge_sort(u1);
	merge_sort(u2);
	// e adiciono INF ao final de cada um deles
	u1.push_back(INF);
	u2.push_back(INF);
	// declaro ini1 e ini2 com valore inicial zero
	int ini1=0, ini2=0;
	// percorro cada posição de v
	for(int i=0;i<v.size();i++){
		// se o menor não usado de u1 for menor o mesmo em u2
		if(u1[ini1]<u2[ini2]){
			// então o coloco em v
			v[i]=u1[ini1];
			// e incremento o valor de ini1
			ini1++;
		}
		// caso contrário, faço o análogo com u2 e ini2
		else{
			
			v[i]=u2[ini2];
			ini2++;
		}
	}
	// por fim, retorno a função merge_sort
	return;
}

int main(){
  int n;
  cin >> n;
  vector<int>numeros;

  for(int i = 0; i < n; i++){
    unsigned long int x;
    cin >> x;
    numeros.push_back(x);
  }

  merge_sort(numeros);

  for(int i = n-1; i >= 0; i--){
  cout << numeros[i] << " ";
  }


return 0;
}