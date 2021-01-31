#include <bits/stdc++.h>

using namespace std;

int main(){
    char c;
    string s, x;
    bool val;

    while(cin >> c >> s && c != '0' && s != "0"){
        x = "";
        val = false;
        for(int i=0; i<s.size(); i++){
            if(s[i] != c ){
                if(s[i] != '0') val = true;
                if(val) x+=s[i];
            }
        }
        if(!val) x = "0";
        cout << x << endl;
    }


    return 0;
}