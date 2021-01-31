#include <bits/stdc++.h>

using namespace std;

int main(){
    bool n,m;
    string s,x;

    while(getline(cin, s) && s.compare("")!= 0){
        x = "";
        n = true;
        m = true;
        for(int i=0;i<s.size();i++){
            if(s[i] == '_'){
                if(n){
                    x += "<i>";
                    n = false;
                }else{
                    x += "</i>";
                    n = true;
                }
            }else if(s[i] == '*'){
                if(m){
                    x += "<b>";
                    m = false;
                }else{
                    x += "</b>";
                    m = true;
                }
            }else{
                x += s[i];
            }
        }
        cout << x << endl;
    }

    return 0;
}