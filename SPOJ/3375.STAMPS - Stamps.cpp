//
// Created by maruba on 06-07-2019.
//

#include <bits/stdc++.h>

using namespace std;
#define MAX 5001
typedef long long int lli;



lli f(lli people, lli cards){
    lli arr[MAX], soma = 0, n = 0;
    lli * max;

    for (lli i = 0; i < people; i ++){
        cin >> arr[i];
    }

    while (soma< cards){
        max = max_element(arr, arr+people);
        if (*max == -1)
            return -1;
        soma += *max;
        *max = -1;
        n++;

    }

    return n;
}

int main(){
    lli cases, people, cards, ans ;
    cin >> cases ;

    for (lli i = 0; i < cases ; i ++){
        cin >> cards >> people;
        ans = f(people, cards);
        if (ans != -1)
            cout << "Scenario #" << i+1 <<":" << endl << ans << endl;
        else
            cout << "Scenario #" << i+1 <<":" << endl << "impossible" << endl;

    }
}

//https://www.spoj.com/problems/STAMPS
