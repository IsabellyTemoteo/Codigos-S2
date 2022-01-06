#include <bits/stdc++.h>
using namespace std;

int main(){
    string cartas;
    cin >> cartas;

    int C = 13, E = 13, U = 13, P = 13;
    set<int> SC, SE, SU, SP;
    bool RESC = false, RESE = false, RESU = false, RESP = false;

    for(int i = 0; i < cartas.size(); i++){
      if( cartas[i] == 'C'){
        int concC = cartas[i-2]* 100 + cartas[i-1];
        if(SC.find(concC) != SC.end()){
          RESC = true;
        }
        else{
          SC.insert(concC);
          C--;
        }
      }
      
      if( cartas[i] == 'E'){
        int concE = cartas[i-2]* 100 + cartas[i-1];
        if(SE.find(concE) != SE.end()){
          RESE = true;
        }
        else{
          SE.insert(concE);
          E--;
        }
      }

      if( cartas[i] == 'U'){
        int concU = cartas[i-2]* 100 + cartas[i-1];
        if(SU.find(concU) != SU.end()){
          RESU = true;
        }
        else{
          SU.insert(concU);
          U--;
        }
      }

      if( cartas[i] == 'P'){
        int concP = cartas[i-2]* 100 + cartas[i-1];
        if(SP.find(concP) != SP.end()){
          RESP = true;
        }
        else{
          SP.insert(concP);
          P--;
        }
      }

    }
        if(RESC == true){
          cout << "erro\n";
        }
        else{
          cout << C << "\n";
        }

        if(RESE == true){
          cout << "erro\n";
        }
        else{
          cout << E << "\n";
        }

        if(RESU == true){
          cout << "erro\n";
        }
        else{
          cout << U << "\n";
        }

        if(RESP == true){
          cout << "erro\n";
        }
        else{
          cout << P << "\n";
        }

    return 0;
}
