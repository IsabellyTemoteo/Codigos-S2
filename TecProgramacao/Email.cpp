#include <bits/stdc++.h>
using namespace std;

void removeCharsFromString( string &str, char* charsToRemove ) {
   for ( unsigned int i = 0; i < strlen(charsToRemove); ++i ) {
      str.erase( remove(str.begin(), str.end(), charsToRemove[i]), str.end() );
   }
}

int main() {
  int n;
  cin >> n;

  string email;
  string email_corrigido[n];
  int soma = 0;

  for(int i = 0; i < n; i++){
    cin >> email;

    for(int j = 0; j < email.size(); j++){
      if(email[j] == '@'){
        break;
      }
      if( email[0] == '.'){
        soma++;
        break;
      }
      if( email[j] == '.' && email[j+1] == '.' ){
        soma++;
        break;
      }
      if( email[j] == '.'){
        removeCharsFromString( email, "." );
        email_corrigido[i] = email;
        cout << email_corrigido[i] << "\n";
        cout << email;
      }
    

    }
  }






  cout << "\n";
  return 0;
}