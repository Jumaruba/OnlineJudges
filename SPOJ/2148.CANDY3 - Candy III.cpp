#include <bits/stdc++.h> 

using namespace std; 

int main(){
    std::ios::sync_with_stdio(false);
    unsigned long long int n, kids,total = 0, candy; 
    cin >> n;

    for (int i = 0; i < n; i++){
        total = 0;
        cin >> kids; 
        for (int j = 0; j< kids ; j++){
            cin >> candy;
            total = total%kids + candy%kids; 
        }
        
        if (total%kids != 0)
            cout << "NO" << endl; 
        else 
            cout << "YES" << endl; 
            
        
    
    }
    return 0;
}

//https://www.spoj.com/problems/CANDY3/
