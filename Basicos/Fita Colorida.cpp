
#include <iostream> 
#include <algorithm> 
using namespace std; 
 
#define MAXN 10100
#define MAX 999999999
 
int main(){	
int n, fita[MAXN], l1[MAXN], l2[MAXN], i; 
cin >> n;

for( i = 1; i <= n; i++) {
cin >> fita[i];  }
	
for( i = 0; i <= n + 1; i++){
l1[i] = l2[i] = MAX; }
	
for( i = 1; i <= n; i++){
if(fita[i] == 0){
l1[i] = 0;}
else{
l1[i] = l1 [i-1] + 1;}
}
for( i = n; i > 0; i--){
if(fita[i] == 0){
l2[i] = 0;}
else {
l2[i] = l2[i+1]+1; }
}
for( i = 1; i <= n; i++) 
cout << min(9, min(l1[i], l2[i])) << " ";
	
printf("\n");
	
	return 0;
}