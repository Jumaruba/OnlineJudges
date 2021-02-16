#include <bits/stdc++.h>

using namespace std;



bool letra(string s){
    for (int i = 0; i < s.size(); i ++){
        if (s[i] >= 'a' && s[i]<='z')
            return true;

    }
    return false;
}

string f(string s){
    size_t igual, mais;
    int n1, n2;
    string primeiro, segundo, ultimo;
    bool p = false,se = false,u = false;
    igual = s.find_first_of('=');
    mais = s.find_first_of('+');

    primeiro = s.substr(0, mais);
    segundo = s.substr(mais+1, igual - mais-1);
    ultimo = s.substr(igual+1);

    vector<int> v;
    if (!letra(primeiro)) p = true;
    if (!letra(segundo)) se = true;
    if (!letra(ultimo)) u = true;

    if (p && se)
        return primeiro + "+" + segundo + "=" + " " + to_string( stoi(segundo) + stoi (primeiro));
    if (p && u)
        return primeiro + "+ " + to_string(stoi(ultimo) - stoi(primeiro)) + " =" + ultimo;
    if (se && u)
        return to_string(stoi(ultimo) - stoi(segundo)) + " +" + segundo + "=" + ultimo;

}

int main(){
    int cases;
    string s;
    cin >> cases;
    cin.ignore();
    for (int i = 0; i < cases; i++){
        cin.ignore(); 
        getline(cin, s);
        cout << f(s) << endl;

    }
}

//https://www.spoj.com/problems/ABSYS/
