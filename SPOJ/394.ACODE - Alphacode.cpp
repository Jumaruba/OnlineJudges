#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli alphaCode(string& s){
    lli r = 1, size = s.size(), j;
    lli b[size];

    for (int i = 0; i < size; i++)
        b[i] = 0;
    b[0] = 1;

    for (int i = 1; i < size; i ++){
        j = (s[i-1]-'0')*10+ s[i]-'0';
        if (s[i] - '0')
            b[i] = b[i-1];
        if (j>9 && j < 27){
            if(i == 1)
                b[i] = b[i]+1;
            else b[i] = b[i]+b[i-2];
        }
    }
    return b[size-1];
}

int main(){
    string s;
    cin >> s;
    while (s!= "0"){
        cout << alphaCode(s) <<endl;
        cin >> s;
    }

}

//https://www.spoj.com/problems/ACODE/

//Explanation:
//Consider "123" 
//1 can form a word
//12 can form 3 words
//123 is: 12 3 (the words 12 can form) + 1 23 (the words 1 can form)

//BY RECURSION 

//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef unsigned long int uli;
//
//
//uli alphaCode(const string& s, const uli& size){
//    uli r;
//    string m;
//
//    if (size == 1){
//        if (s>="1" && s<="9" && s!= "0")
//            return 1;
//        return 0;
//    }
//    m = s.substr(0,2);
//    if (size == 2){
//        if (m <= "26" && m[0] != '0'){
//            if (m[1] != '0')
//                return 2;
//            return 1;
//        }
//        return 0;
//    }
//
//    if (s[0] != '0'){
//        r = alphaCode(s.substr(1,size-1), size-1);
//        if (m == "00" || m >= "26" || size == 2){
//            return r;
//        }
//
//        return r + alphaCode(s.substr(2,size-2),size-2);
//    }
//
//    return 0;
//
//}
//
//
//
//
//int main(){
//    string s;
//    cin >> s;
//    while(s!= "0"){
//        cout << alphaCode(s, s.size()) << endl;
//        cin >> s;
//    }
//}
