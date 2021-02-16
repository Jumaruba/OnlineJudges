#include <bits/stdc++.h>

using namespace std;



int f(float len){
    float answer = 0, potencia = 2.0;
    int cards = 0;


    while (answer < len){

        answer += 1/potencia;
        potencia++;
        cards++;
    }
    return cards;
}



int main(){
    float len;

    cin >> len;
    while (len != 0){
        cout << f(len) << " card(s)" << endl;
        cin >> len;
    }

}

//https://www.spoj.com/problems/HANGOVER/
