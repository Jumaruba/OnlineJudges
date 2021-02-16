#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;


ll rectangles(int n){
    ll counter = 0;
    for (int i = 1; i <= sqrt(n); i++){
        for (int j = i; j <= n; j++){
            if (j*i <= n)
                counter ++;
        }
    }
    return counter;

}

int main(){
    int n;
    cin>> n;
    cout << rectangles(n) << endl;

}

//https://www.spoj.com/problems/AE00/
