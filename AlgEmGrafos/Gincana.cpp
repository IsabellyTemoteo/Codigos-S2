// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;
#define MAXN 50050
int individuo[MAXN];
vector<int> amigos[MAXN];

void dfs(int x){
	for(int i = 0;i < (int)amigos[x].size();i++){
		int v = amigos[x][i];
		if(individuo[v] == -1){ 
			individuo[v] = individuo[x];
			dfs(v);
		}
	}
}

int main(){
  int n, m;
	cin >> n >> m;

	for( int i = 1; i <= n; i++) individuo[i] = -1; 
	  for(int i = 1;i <= m;i++){
		  int x, y;
		  cin>>x>>y;
		  amigos[x].push_back(y);
		  amigos[y].push_back(x);
	}
	
	int soma = 0;
	for(int i = 1; i <= n; i++){
		if(individuo[i] == -1){ 
			soma++;
			individuo[i] = soma;
			dfs(i);
		}
	}
	cout << soma <<"\n"; 
	
	return 0;
}
