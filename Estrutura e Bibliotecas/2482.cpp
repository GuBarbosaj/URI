#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    n *= 2;
    string v[250], x[250];
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, v[i]);
    }

    cin >> m;
    m *= 2;
    cin.ignore();
    for(int i=0; i<m; i++){
        getline(cin, x[i]);
    }

    for(int i=0; i<m; i+=2){
        cout << x[i] << endl;
         for(int j=0; j<n; j+=2){
            if(v[j]==x[i+1]){
                cout << v[j+1] << endl << endl;
                break;
            }
         }
    }

    return 0;
}
