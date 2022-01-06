#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    long long int somac=0, doisultimos = 0;
    int a=0, b=0;
    bool prim= true;

    char c;

    while(true)
    {
        c = getchar();
        if(c=='\n')
        {
            break;
        }
        else
        {
            somac = somac + (c - '0');
            if(prim)
            {
                a = c-'0';
                prim = false;
            }
            else
            {
                b = a;
                a = c - '0';
            }
        }
    }

    doisultimos = a + b*10;

    if( doisultimos%4 == 0)
        cout << "S\n";
    else
        cout << "N\n";

    if(somac%9==0)
        cout << "S\n";
    else
        cout << "N\n";

    if(doisultimos%25 == 0)
        cout << "S";
    else
        cout << "N";

    return 0;
}