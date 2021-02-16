#include <bits/stdc++.h> 
using namespace std; 

typedef long long int ll; 

ll Stoi(string& s)
{
    ll result=0; 

    for (int i = 0 ; i< s.size(); i++){
        result = result*10 + s[i] - '0'; 
    }   
    return result;
}

void trimLeft(string& s){ 
    s.substr(s.find_first_not_of('0'));
}
string sumString(string s, int size){
    if (size == 1 && s[0] == '9'){
        s.insert(0,"0");  
        return sumString(s.substr(0,1), 1) + '0'; 
    }
    else if (s[size-1] == '9'){
        return sumString(s.substr(0,size-1), size -1 ) + '0'; 
    }

    s[size-1]++;
    return s; 
}


int main(){

    ll cases;
    string core, reversed;
    bool palindromo;   

    cin >> cases; 
    cin.ignore();
     
    for (ll i = 0; i< cases; i++){
        palindromo = false; 

        getline(cin, core);
        trimLeft(core); 
        core = sumString(core, core.size());
        while(!palindromo){
            reversed = core; 
            reverse(reversed.begin(), reversed.end()); 
            if (reversed == core){
                palindromo = true; 
                cout << core << endl; 
            }
            core = sumString(core, core.size());
        }
    }
}
