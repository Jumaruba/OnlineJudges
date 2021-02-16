#include <iostream> 
#include <cmath> 

using namespace std; 

bool isPrime(int n){
    if (n == 1)
        return false;
    if (n == 2)
        return true; 
    for (int i = 2; i<= sqrt(n); i++){
        if (n%i == 0)
            return false; 
    }
    return true; 
}

int main(){

    int n; 
    int n0, n1; 

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> n0 >> n1; 
        for (int i = n0; i <= n1; i++){
            if (isPrime(i))
                cout << i << endl; 
        }
    }
    return 0;
}

//https://www.spoj.com/problems/PRIME1/
