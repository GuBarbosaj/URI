#include <bits/stdc++.h>

using namespace std;

int main(){
    long int n;
    int ma, c, x;
    cin >> n;

    while(n>0){
        cin >> ma >> c;
        int m[ma][c+1], v[ma], r;

        for(int i=0; i<ma; i++) v[i] = 0;

        for(int i=0; i<ma; i++){
            for(int j=0; j<c+1; j++){
                m[i][j] = -1;
            }
        }

        for(int i=0; i<c; i++){
            cin >> x;
            r = x % ma;
            m[r][v[r]] = x;
            v[r]++;
        }

        for(int i=0; i<ma; i++){
            for(int j=0; j<c+1; j++){
                if(j==0) cout << i << " -> ";
                if(m[i][j] != -1){
                    cout << m[i][j] << " -> ";
                }else{
                    cout<< "\\"<< endl;
                    j=c;
                }
            }
        }
        n--;
        if(n>0) cout << endl;

    }

    return 0;
}