#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, qt, s, pos, dif, x, i;
    cin >> n;

    while(n-->0){
        cin >> qt >> s;
        cin >> x;
        dif = abs(x-s);
        pos = 1;
        for(i=2; i<=qt; i++){
            cin >> x;
            if(abs(x-s) < dif){
                dif = abs(x-s);
                pos = i;
            }
        }
        cout << pos << endl;
    }

    return 0;
}