#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, x;
    int i;
    set<string> dic;

    while(cin>>s){
        x = "";
        for(i=0;i<s.size();i++){
            if(isalpha(s[i])){
                x +=tolower(s[i]);
            }else if(x.size()>0){
                dic.insert(x);
                x = "";
            }
        }
        if(x.size()>0) dic.insert(x);
    }

    for(auto it=dic.begin(); it!=dic.end(); ++it) cout << *it << endl;


    return 0;
}
