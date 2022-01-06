#include <iostream>
using namespace std;

int main() {
int N;
cin >> N;
int soma = 0, copy;
int nota_100, nota_50, nota_25, nota_10, nota_5, nota_1;
int resto_100, resto_50, resto_25, resto_10, resto_5;
nota_100 = N/100;
resto_100 = N%100;
nota_50 = resto_100/50;
resto_50 = resto_100%50;
nota_25 = resto_50/25;
resto_25 = resto_50%25;
nota_10 = resto_25/10;
resto_10 = resto_25%10;
nota_5 = resto_10/5;
resto_5 = resto_10%5;
nota_1 = resto_5/1;

soma = nota_100 + nota_50 + nota_25 + nota_10 + nota_5 + nota_1;
cout << soma;
return 0;}