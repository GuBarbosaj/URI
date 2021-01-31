#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int k, n, m, x, y;
    while(cin >> k && k != 0){
        cin >> n >> m;
        while(k-->0){
            cin >> x >> y;
            if(x==n || y ==m){
                cout << "divisa" << endl;
            }else if(x<n && y>m){
                cout << "NO" << endl;
            }else if(x>n && y>m){
                cout << "NE" << endl;
            }else if(x>n && y<m){
                cout << "SE" << endl;
            }else{
                cout << "SO" << endl;
            }
        }
    }



    return 0;
}
