#include <bits/stdc++.h>

using namespace std;

double squares(int n){
    double answer = 0;
    for (int i = 1; i < n+1; i++){
        answer += pow(i,2);
    }
    return answer;
}
int main(){

    int sides;
    cin >> sides;
    while (sides){
        cout << squares(sides) << endl;
        cin >> sides;
    }

}

//https://www.spoj.com/problems/SAMER08F/
