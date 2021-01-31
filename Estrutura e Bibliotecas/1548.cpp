#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x, i, dif;
    vector<int> v1, v2;
    cin >> n;

    while(n-->0){
        cin >> m;
        for(i=0;i<m;i++){
            cin >> x;
            v1.push_back(x);
            v2.push_back(x);
        }
        sort(v2.begin(),v2.end(), greater<int>());
        dif=0;

        for(i=0;i<v1.size();i++){
            if(v1[i] == v2[i]){
                dif++;

            }
        }

        cout << dif << endl;
        v1.clear();
        v2.clear();
    }

    return 0;
}