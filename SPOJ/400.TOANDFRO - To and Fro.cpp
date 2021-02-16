#include <bits/stdc++.h>

using namespace std;

string getMatrix(const string& s, const int& n){
    int position = 0;
    string aux, result;
    for (int i = 0; i < s.size(); i++){
        aux.push_back(s[i]);
        position ++;
        if (position == n*2){	//finished a cicle
            position = 0;
            reverse(aux.begin(),aux.end()); //reverse the "second string"
            result.append(aux);
            aux.clear();
        }
        else if(position == n){
            result.append(aux);
            aux.clear();
        }


    }

    return result;
}

void showString(const string& s, const int& n){
    for (int i = 0; i < n; i ++)
        for (int j = 0; j < s.size()/n; j++){
            cout << s[j*n+i] ;
        }
    cout << endl;
}

int main(){

    int n;
    string s;
    cin >> n;
    while (n != 0){
        cin >> s;
        s = getMatrix(s, n);
        showString(s, n);

        cin >> n;

    }
}

//https://www.spoj.com/problems/TOANDFRO/
