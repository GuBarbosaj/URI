#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, m;

    while(cin >> n >> m && n!=0 && m!=0){
        int x[n][m];

        bool c1,c2,c3,c4;
        c1 = c2 = c3 = c4 = true;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> x[i][j];
            }
        }


        int r = 0, c=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(x[i][j]==1) r++;
            }
            if(r!=m){
                r = 0;
            }else{
                c1 = false;
                break;
            }
        }

        r = 0;
        for(int j=0; j<m; j++){
            for(int i=0; i<n; i++){
                if(x[i][j]==1) r++;
            }
            if(r!=0){
                if(r==n) c3 = false;
                r = 0;
            }else{
               c2 = false;
               r = 0;
            }
        }

        r=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(x[i][j]==1) r++;
            }
            if(r!=0){
                r = 0;
            }else{
                c4 = false;
                break;
            }
        }
        if(c1){
            c++;
        }
        if(c2){
           c++;
        }
        if(c3){
           c++;
        }
        if(c4){
           c++;
        }
        cout << c << endl;

    }

    return 0;
}