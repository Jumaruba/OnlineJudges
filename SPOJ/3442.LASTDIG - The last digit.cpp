
#include <bits/stdc++.h>

using namespace std;

vector <int> frequency = {0,1,4,4,2,1,1,4,4,2};

int lastDigit(int base, long long int exp){
    int last = base%10;

    if (exp == 0)
        return 1;

    else if (last == 0)
        return 0;

    int r = exp%frequency[last];
    if (r == 0)
        r = frequency[last];

    int result = pow(base,r);
    return result%10;

    }

int main(){

    int cases;
    int base;
    long long int exp;
    cin >> cases;
    for (int i = 0; i < cases; i ++){
        cin >> base >> exp;
        cout << lastDigit(base, exp) << endl;
    }
}
//https://www.spoj.com/problems/LASTDIG/
