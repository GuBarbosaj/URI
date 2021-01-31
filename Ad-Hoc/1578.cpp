#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, x=4, t, t1;
    unsigned long long int v[20][20], big[20], tt[20];

    cin >> n;

    while(n-->0){
        cin >> m;
        for(int i=0; i<m; i++) big[i] = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                cin >> v[i][j];
                v[i][j] *= v[i][j];
                if(v[i][j] > big[j]){
                    big[j] = v[i][j];
                }
            }
        }

        for(int i=0; i<m; i++){
            t=1;
            while(big[i]>9){
                t++;
                big[i] = big[i]/10;
            }
            tt[i] = t;
        }

        cout << "Quadrado da matriz #"<<x<<":"<< endl;
        for(int i=0; i<m; i++){
            for(int j=0; j<m; j++){
                cout << setw(tt[j]) <<v[i][j];
                if(j+1<m){
                    cout << " ";
                }
            }
            cout << endl;
        }
        if(n-1>-1) cout << endl;
        x++;
    }

    return 0;
}
