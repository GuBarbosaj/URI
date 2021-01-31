#include <iostream>

using namespace std;

int main(){
    int n,c,s,sA;

    while(cin >> n){
        cin >> c;
        int v[n];
        for(int i=0; i<n; i++){
            cin >> v[i];
            v[i] -= c;
        }
        // for(int i=0; i<n; i++) cout << v[i] << " ";
         //cout << endl;

        s = sA = 0;
        for(int i=0; i<n; i++){
            sA = max(0, sA+v[i]);
            //cout << max(0, sA+v[i]) << " ";
            s = max(sA, s);
        }
        cout << s << endl;
    }

    return 0;
}
