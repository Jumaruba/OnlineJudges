//
// Created by maruba on 03-07-2019.
//

#include <bits/stdc++.h>
using namespace std;

#define MAX 50001
typedef long long int lli;

//---------------------------------------------------------------------------------------
// to discover the pa logic
//int main(){
//    int count = 0;
//    int x = 251;
//    while (x*(3*192*192+3*192*x+x*x) %1000 != 0){
//        x++;
//    }
//    cout << x;
//}
//---------------------------------------------------------------------------------------

size_t soma(lli c[], lli n[], size_t size_n){ //this function sums two arrays
    lli carry = 0;
    lli aux;
    for (size_t i = 0; i < size_n; i++){
        aux = (c[i]+n[i]+carry);
        c[i] = aux%10;
        carry = aux/10;
    }

    while (carry){
        aux = (c[size_n]+carry);
        c[size_n] = aux%10;
        carry = aux/10;
        size_n++;
    }

    return size_n;
}

void multiply(lli pos, size_t& size){ //this function multiplies one array by an integer 
    size_t size_n = 3;
    lli c[MAX] = {0,5,2};
    lli n[MAX] = {2,9,1};
    lli carry = 0;
    lli aux;
    for (size_t i = 0; i < size; i++){
        aux = (c[i]*pos + carry);
        c[i] = aux%10;
        carry = aux/10;

    }

    while (carry){
        c[size] = carry%10;
        carry = carry/10;
        size++;
    }
    
    //printing 192+250*(pos-1)
    size_n = soma(c, n, 3);

    if (size_n > size)
        size = size_n;
    for (lli i = size - 1; i >= 0; i--) {
        cout << c[i];
    }

}



int main(){

    size_t size_n = 3, size = 3;
    long long int cases, pos;

    cin >> cases;
    for (lli i = 0 ; i < cases; i ++) {

        cin >> pos;
        multiply(pos-1, size);

        cout << endl;
        size_n = 3; size = 3;



    }
}

//https://www.spoj.com/problems/classical/sort=6
