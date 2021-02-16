#include <bits/stdc++.h>

using namespace std;


bool f(int x, int N, int C, int c[]){
    int placedCows = 1, lastPos = c[0];
    for (int i = 0 ; i < N; i++){
        if (c[i]-lastPos >= x) {
            if (++placedCows == C) return 1;
            lastPos = c[i];
        }
    }
    return 0;
}

int code(int N, int C){
    int c[N];
    for (int i = 0; i < N; i ++) cin >> c[i];

    sort(c,c+N);
    int start = 0, end = c[N-1]-c[0]+1, mid;
    while (end-start > 1){
        mid = (end+start)>>1;
        (f(mid, N, C, c)?start:end) = mid;
    }

    return start;
}

int main(){
    int cases, N, C, r;
    cin >> cases;
    for (int i = 0 ; i < cases; i++){
        cin >> N >> C;
        r = code(N,C);
        cout << r << endl;
    }
}

//https://www.spoj.com/problems/AGGRCOW/
