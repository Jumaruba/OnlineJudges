#include <bits/stdc++.h>


using namespace std;


int f(int size){
    vector <int> v(size), stack(size);
    int stackSize = 0;
    int vez = 1;

    for (int i = 0; i < size; i++)cin >> v[i];

    for (int i = 0; i < size; i++){
        if (v[i] != vez) {
            stack[stackSize] = v[i];
            stackSize++;
        }
        else vez++;
        
        while (vez == stack[stackSize-1]){
            stackSize--;
            vez++;
        }
    }

    for (int i = stackSize-1; i>=0; i--){
        if (stack[i] == vez){
            vez ++;
        }
        else return false;
    }
    return true;

}



int main(){
    int size;

    cin >> size;
    while (size != 0){
        if (f(size)) cout << "yes" << endl;
        else cout << "no" << endl;

        cin >> size;
    }
}

//https://www.spoj.com/problems/STPAR/
