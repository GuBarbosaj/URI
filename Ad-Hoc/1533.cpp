#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, sm, aux, pos, posM;

    while(cin >> n && n!=0){
        cin >> m >> sm;
        posM = 1;
        pos = 2;
        if(m<sm){
            aux = sm;
            sm = m;
            m = aux;
            pos = 1;
            posM = 2;
        }
        for(int i=3; i<=n; i++){
            cin >> aux;
            if(aux>sm){
                if(aux>m){
                    sm = m;
                    pos = posM;
                    m = aux;
                    posM = i;
                }else{
                    sm = aux;
                    pos = i;
                }
            }
        }
        cout << pos << endl;
    }

    return 0;
}