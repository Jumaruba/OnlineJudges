#include <bits/stdc++.h>

using namespace std;

int main(){
    int cases;
    int number, grade;
    double total= 0;

    cin >> cases;
    vector <int> women;
    vector <int> men;
    
    for (int i = 0; i < cases; i++){
        cin >> number;
        
        for (int j = 0; j < number; j++){   //input elements into the men's vector
            cin >> grade;
            men.push_back(grade);
        }
        for (int j = 0; j < number; j++){   //input elements into women's vector
            cin >> grade;
            women.push_back(grade);
        }
        sort(women.begin(),women.end());    //sorting men's vector
        sort(men.begin(),men.end());        //sorting women's vector
    
        for (int j = 0; j < number; j ++){  //calculating the max sum 
            total+= men[j]*women[j];
        }
        
        cout << total << endl;
        total = 0;
        
        women.clear();
        men.clear();

    }
}

//it would be more efficient if we used an array with initial size of 10000
//https://www.spoj.com/problems/FASHION/
