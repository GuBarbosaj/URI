#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, x, c, i;
    vector <int> v;
    for(i=0; i<102; i++) v.push_back(0);


    while(cin >> n >> k && n != 0 && k != 0){
        c = 0;
        for(i=0;i<n;i++){
            cin >> x;
            v[x]++;
        }
        for(i=0;i<101;i++){
            if(v[i]>=k) c++;
            v[i] = 0;
        }
        cout << c << endl;
    }

    return 0;
}