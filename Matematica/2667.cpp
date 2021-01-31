#include <bits/stdc++.h>

using namespace std;

int main(){
    string x;
    long long int y, r;
    cin >> x;

    for(int i=0;i<x.size();i++){
        y += x[i];
    }
    r = y%3;
    cout << r << endl;


    return 0;
}
