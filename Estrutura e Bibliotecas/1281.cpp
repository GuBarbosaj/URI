#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    map<string, double> l;
    int n, m, p;
    double total, x;
    string s;

    cin >> n;
    cout << fixed << setprecision(2);
    while(n-->0){
        cin >> m;
        while(m-->0){
            cin >> s >> x;
            l[s] = x;
        }
        cin >> p;
        total = 0;
        while(p-->0){
            cin >> s >> x;
            total += (l[s]*x);
        }
        cout << "R$ " << total << endl;
    }

}
