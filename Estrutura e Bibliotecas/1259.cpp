#include <bits/stdc++.h>

using namespace std;

int main(){
    multiset <int> par;
    multiset <int, greater<int> >impar;
    long int n, x;

    cin >> n;

    while(n-->0){
        cin >> x;
        if(x%2 == 0){
            par.insert(x);
        }else{
            impar.insert(x);
        }
    }

    multiset<int>::iterator it;

    for(it =par.begin(); it!=par.end(); ++it) cout << *it << endl;
    for(it =impar.begin(); it != impar.end(); ++it) cout << *it << endl;

    return 0;
}
