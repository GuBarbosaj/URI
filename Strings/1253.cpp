#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n,e,pos,i;
    cin >> n;

    while(n-->0){
        cin >> s >> e;
        for(i=0;i<s.size();i++){
            pos = ((int)s[i]) - e;
            if(pos<65){
                pos = 90-(64-pos);
                s[i] = char(pos);
            }
            s[i] = char(pos);
        }
        cout << s << endl;
    }

    return 0;
}
