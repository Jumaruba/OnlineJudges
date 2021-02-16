#include <iostream>
#include <vector>
using namespace std;

typedef long long int lli;


lli zeros(lli n){
    lli contador = 0;
    while (n> 4){
        contador += n/5;
        n = n/5;

    }
    return contador;
}
int main() {
    lli cases, numero;
    cin >> cases;

    for (int i = 0; i < cases; i ++){
        cin >> numero;
        cout << zeros(numero) << endl;
    }
    return 0;
}
//https://www.spoj.com/problems/FCTRL/
