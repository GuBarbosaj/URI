#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, i, y, c=1, p;
    set<int> s;
    set<int>::iterator it;

    cin >> t;

    while(t-->0){
        cin >> n;
        for(i=0; i<n; i++){
            cin >> y;
            s.insert(y);
        }
        p = 0;
        it = s.begin();
        while(p != (n/2)){
            ++it;
            p++;
        }
        cout << "Case "<<c << ": " << *it << endl;
        c++;
        s.clear();
    }

    return 0;
}
