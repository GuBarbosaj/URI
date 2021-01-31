#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, x;
    unsigned long long int g;
    cin >> n;
    while(n-->0){
        cin >> x;
        if(x != 64){
            g = pow(2, x);
            cout << g/12000 << " kg" << endl;
        }else{
            g = pow(2, x-1);
            cout << g/6000 << " kg" << endl;
        }
    }

    return 0;
}
