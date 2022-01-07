#include <bits/stdc++.h>
using namespace std;

bool comparar(pair<int, string> A, pair<int, string> B){
  return A.second < B.second;
}

int main() {
  int n, t, i, j;
  cin >> n >> t;

  vector<pair<int, string>> alunos;
  vector<vector<pair<int, string>>> times;	
  pair<int, string>temp;

  for( i = 0; i < n; i++){
    cin >> temp.second >> temp.first;
    alunos.push_back(temp);
  }

  sort(alunos.rbegin(), alunos.rend());
  times.resize(t);

  for( i = 0, j = 0; i < n; i++){
		times[j].push_back(alunos[i]);		
		if(j == t - 1) j = 0;
		else j++;
	}		
	for(i = 0; i < t; i++){
		sort(times[i].begin(), times[i].end(), comparar);	
		cout << "Time " << i + 1 << "\n";
		for(j = 0; (unsigned)j < times[i].size(); j++)
		cout << times[i][j].second << "\n";		
		cout << "\n";
	}
  return 0;
}