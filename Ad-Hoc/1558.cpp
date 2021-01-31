#include <bits/stdc++.h>

using namespace std;

set<int> quadrado(){
    set <int> v;
    int i=0, j=0, k;
    while(1){
        if(i*i <= 10000){
            k = i*i+j*j;
            v.insert(k);
            j++;
            if(k > 10000){
                i++;
                j=0;
            }
        }else{
            return v;
        }

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    set <int> v;
    v = quadrado();

    while(cin >> n){
        if(v.find(n) != v.end()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}