#include <bits/stdc++.h>

using namespace std;

int main(){
    int h1, m1, h2, m2, mi;

    while(cin >> h1 >> m1 >> h2 >> m2){

        if(h1 == m1 && m1 == h2 && h2 == m2 && m2 == 0){
            return 0;
        }else{
            mi = 0;
            if(h2 > h1){
                mi = ((h2-h1)*60) - m1 + m2;
            }else{
                if(h1 == 0 && m1<m2) h1 = 24;
                mi = ((24-h1)*60)+(h2*60) - m1 + m2;
                if(h1 == h2 && m1<m2) mi = m2-m1;
            }
            cout << mi << endl;
        }
    }
}