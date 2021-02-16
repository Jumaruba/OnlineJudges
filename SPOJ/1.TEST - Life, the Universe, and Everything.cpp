#include <iostream>

using namespace std;

int main(){
    int n; //inputs
    bool there = false; //true if reads 42
    while(cin >> n){
        if (!there && n!= 42) //case 42 did not appear yet
            cout << n << endl;
        else {
            there = true;
        }
    }
    
    return 0;
}

//https://www.spoj.com/problems/TEST/
