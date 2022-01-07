#include <iostream>
using namespace std;

int main(){
   int A, N, cont = 0, i = 1, j = 0;
   cin >> N;

while( i <=N ){
      cin >> A;
      if( cont < 1000000){
          cont += A;
           j++;} 
	  i++; }

cout << j;
}