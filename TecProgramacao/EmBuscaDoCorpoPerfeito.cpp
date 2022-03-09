// Isabelly Temoteo ＞▽＜
#include <bits/stdc++.h>
using namespace std;

int main() {
int p, n, proteina[p], peso[n];
long long dp[p][n];

long long knapsack(int i,int j){
	if(i > n)return 0;
	//se Kakariús não pode comer mais nada, retorna 0
	if(!j)return 0;
	//se já calculamos esse estado, retorne a resposta
	if(dp[i][j] >= 0)return dp[i][j];
	//calcula o resutado quando pulamos este pedaço
	long long nao_come = solve(i+1,j);

	if( peso[i] <= j){
		//calcula o resultado quando Kakariús come essa carne
		long long come = solve(i+1, j - peso[i]) + (ll)proteina[i];
		//pega a melhor resposta
		return dp[i][j] = max(dp[i][j], max(nao_come, come));
	}

	//define a resposta
	return dp[i][j] = max(dp[i][j], nao_come);
}

int main(){
	memset(dp, -1, sizeof(dp));

	//leio a entrada
	cin>>p>>n;

	for(int i = 1;i <= n;i++)cin>>peso[i]>>proteina[i];

	//retorno a resposta
	cout<<knapsack(1, p)<<"\n";

	return 0;
}