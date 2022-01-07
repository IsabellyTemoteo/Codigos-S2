#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, i, j;
  cin >> t;

	string ent;
	char thelast;
	bool ok;
	stack<char> chaves, colchetes, parenteses;

	for( i = 0; i < t; i++){
	  ok = true;
		cin >> ent;
    for( j = 0; j < ent.size(); j++){
			switch(ent[j]){
				case '(':{
					parenteses.push('(');
					thelast = '(';
					break;
				}

				case ')':{
					if(thelast == '[' || thelast == '{')
					ok = false;
					else if(parenteses.empty()) {
					ok = false;
					}
					else{
              parenteses.pop();
          }
					thelast = ')';
					break;
				}

				case '[':{
					colchetes.push('[');
					thelast = '[';
					break;
				}

				case ']':{
					if(thelast == '(' || thelast == '{')
					ok = false;
					else if(colchetes.empty()){
						ok = false;
					}
					else{
              colchetes.pop();
          }
					thelast = ']';
					break;
				}

				case '{':{
					chaves.push('{');
					thelast = '{';
					break;
				}

				case '}':{
					if(thelast == '(' || thelast == '[')
					ok = false;
					else if(chaves.empty()){
						ok = false;
					}
					else{
              chaves.pop();
          }
					thelast = '}';
					break;
				}
			}
			if(!ok) break;
		}

		if(!parenteses.empty() || !colchetes.empty() || !chaves.empty())
		ok = false;

		if(ok)
		{
        cout << "S\n";
		}
		else
		{
        cout << "N\n";
		}

		while(!parenteses.empty())
            parenteses.pop();
		while(!colchetes.empty())
            colchetes.pop();
		while(!chaves.empty())
            chaves.pop();

	}
	return 0;
}