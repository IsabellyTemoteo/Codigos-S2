#include<iostream>
using namespace std;
int main()
{
    string L1, D1, REV;
    cin >> L1;
	int i;
	
    //COMPARANDO A STRING NORMAL
    for( i = 0; i < L1.size(); i++){
        if(L1[i] == 'a'|| L1[i] == 'e'|| L1[i] == 'i'|| L1[i] == 'o'|| L1[i] == 'u'){
        D1 = D1 + L1[i]; }
    }
    //COMPARANDO A STRING INVERSAMENTE!!
    for(int i = L1.size()-1; i >= 0; i--){
        if( L1[i] == 'a'|| L1[i] == 'e'|| L1[i]=='i' || L1[i] =='o' || L1[i] =='u')
        REV = REV + L1[i];
    }
    if( D1 == REV)
        cout << "S\n";
    else
        cout<<"N\n";
  
return 0;}