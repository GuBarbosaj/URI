#include <bits/stdc++.h>

using namespace std;

const double pi = 3.1415;

int main(){
    int n;
    string s,ss,x;
    cin >> n;

    while(n-->0){
        cin >> s >> ss;
        x = "";
        if(s.size()<ss.size()){
            for(int i=0;i<s.size();i++){
                x += s[i];
                x += ss[i];
            }
            for(int i=s.size(); i<ss.size();i++) x += ss[i];
        }else{
            for(int i=0;i<ss.size();i++){
                x += s[i];
                x += ss[i];
            }
            for(int i=ss.size(); i<s.size();i++) x += s[i];
        }
        cout << x << endl;
    }
    return 0;
}