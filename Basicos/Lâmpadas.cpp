#include <iostream>
using namespace std;
int main(){

int N, i, A = 0, B = 0;
cin >> N;

int Num[N];

for(i = 0; i < N; i++){
cin >> Num[i];
if ( i == 0 ){
if(Num[i] == 1){
A = 1;}
else if (Num[i] == 2){
A = 1;
B = 1; }}}

for(i = 1; i < N; i++){

if( Num[i] == 1){
if( A == 1) A = 0;
else if ( A == 0) A = 1;
}

if ( Num[i] == 2){
if ( A == 1) A = 0;
else if ( A == 0 ) A = 1;
if ( B == 1) B = 0;
else if ( B == 0) B = 1;
}
}
cout << A << endl;
cout << B << endl;

return 0;}