#include <bits/stdc++.h>

using namespace std;

int main() {
    int cases, x, y;

    cin >> cases;

    for (int i = 0; i < cases; i++) {
        cin >> x >> y;
        if (x != y) {

            if ((x - y) != 2)
                cout << "No Number" << endl;

            else {
                if (x % 2 && y % 2)
                    cout << x + y - 1 << endl;
                else
                    cout << x + y << endl;
            }
        } else {
            if (x % 2 && y % 2)
                cout << x + y - 1 << endl;
                    else
                cout << x + y << endl;
        }

    }
}

//https://www.spoj.com/problems/NSTEPS/
