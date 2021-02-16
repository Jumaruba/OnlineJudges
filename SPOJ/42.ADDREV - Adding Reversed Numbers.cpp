#include <iostream>
#include <string> 

using namespace std; 

void reverse(int &n){
    string s, reversed;
    s = to_string(n);
    for (int i = s.size()-1; i>= 0; i--)
        reversed.push_back(s[i]);
    n = stoi(reversed);
}

int main(){
    int cases; 
    int n1, n2; 
    cin >> cases;
     
    for (int i = 0; i< cases; i++){
        cin >> n1 >> n2;
        reverse(n1); 
        reverse(n2);
        n1 = n1 + n2;
        reverse(n1);
        cout << n1 << endl;
    }
    return 0;
}

//https://www.spoj.com/problems/ADDREV/
