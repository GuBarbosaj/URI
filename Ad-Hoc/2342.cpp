#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int n,p,q;
    char c;
    cin >> n >> p >>c >> q;

    if(c == '+'){
        p+=q;
        if(p<=n){
            cout << "OK" << endl;
        }else{
            cout << "OVERFLOW" << endl;
        }
    }else{
        p*=q;
        if(p<=n){
            cout << "OK" << endl;
        }else{
            cout << "OVERFLOW" << endl;
        }
    }

    return 0;
}
