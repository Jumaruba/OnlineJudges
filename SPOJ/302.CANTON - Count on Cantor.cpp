//
// Created by juliane on 01/08/2019.
//

#include <bits/stdc++.h>

using namespace std;

typedef long int li;

int diagonalGuess(int n){
    return (-1 + sqrt(8*n-7))/2 +1;
}

li diagonal(int n){
    li guess = -1;
    li resultado = 0;
    while (!(n >= guess && n<=(guess+resultado-1))) {
        resultado = diagonalGuess(n);
        guess = resultado*(resultado -1)/2 +1;

    }
    return resultado;
}

string findFraction(int n){
    ostringstream os;
    li diag = diagonal(n);
    li firstTerm = diag*(diag -1)/2 +1;
    li numerador;
    li denominador;

    if (diag%2 == 0){
        denominador = (diag-(n-firstTerm));
        numerador = (diag+1 - denominador);
    }
    else{
        numerador = diag - (n - firstTerm);
        denominador = (diag+1 - numerador);
    }
    os << numerador << "/" << denominador;
    return os.str();
}
int main(){
    int quantidade;
    li term;
    cin >> quantidade;
    for (int i = 0; i < quantidade; i++){
        cin >> term;
        cout << "TERM " << term << " IS " << findFraction(term) << endl;
    }

}

//https://www.spoj.com/problems/CANTON/
