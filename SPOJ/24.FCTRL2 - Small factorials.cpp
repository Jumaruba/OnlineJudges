#include <bits/stdc++.h>

using namespace std;

#define MAX 500

size_t multiply(const int& n, int arr[], size_t size){
    int carry = 0;
    for (size_t i = 0; i< size; i++){
        int prod = arr[i]*n + carry;
        carry = prod/10;
        arr[i]= prod%10;
    }

    while (carry){
        arr[size] = carry%10;
        carry = carry/10;
        size++;
    }
    return size;
}

void factorial(int n){
    int arr[MAX];
    arr[0] = 1;
    size_t size = 1;

    for (int i = 2; i < n+1; i++)
        size = multiply(i, arr, size);
    for (int i = size-1; i >=0; i--)
        cout << arr[i];
    cout << endl;
}

int main(){
    int cases, n;
    cin >> cases;

    for (int i = 0; i < cases; i++){
        cin >> n;
        factorial(n);
    }

}

//https://www.geeksforgeeks.org/factorial-large-number/
//https://www.spoj.com/problems/FCTRL2/
