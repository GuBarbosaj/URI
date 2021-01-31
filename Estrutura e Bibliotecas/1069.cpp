#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, cont, posD;
    bool dir;
    char s[1001];
    cin >> n;
    getchar();


    while(n-->0){
        //cin.ignore();
        scanf("%[^\n]s", &s);
        getchar();
        //cout << s << endl;
        dir = false;
        cont = 0;
        if(strlen(s)>1){
            for(int i=0; i<strlen(s); i++){
                if(s[i] == '<'){
                    dir = true;
                    posD = i;
                }else if(s[i] == '>' && dir){
                    cont++;
                    s[posD] = '.';
                    s[i] = '.';
                    i = -1;
                    dir = false;
                }
            }
        }
        cout << cont << endl;
    }

    return 0;
}
