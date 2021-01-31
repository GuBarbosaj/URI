#include <bits/stdc++.h>

using namespace std;

const int MAX = 150000;

int main(){
    int n, m, x, v[MAX];
    bool f[MAX], p=true;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> v[i];
        f[v[i]] = true;
    }

    cin >> m;

    for(int i=0; i<m; i++){
        cin >> x;
        f[x] = false;
    }

    for(int i=0; i<n; i++){
        if(f[v[i]]){
            if(p){
                cout << v[i];
                p = false;
            }else{
                cout <<" " << v[i];
            }
        }
    }
    cout << endl;

    return 0;
}