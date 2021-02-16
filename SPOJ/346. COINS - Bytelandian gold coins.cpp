#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

map<ll,ll> v;

ll f(ll coins){
    ll r = v[coins];
    if (coins == 0)
        return 0;

    if (r == 0) {
        r = max(coins, f(coins / 2) + f(coins / 3) + f(coins / 4));
        v[coins] = r;
    }
    return r;

}


int main(){
    ll coins;
    while (cin >> coins)
        cout << f(coins) << endl;
}

//https://www.spoj.com/problems/COINS/
