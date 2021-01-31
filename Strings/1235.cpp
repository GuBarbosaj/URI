#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n,i;
    cin >> n;
    cin.ignore();
    while(n-->0){
        getline(cin, s);
        for(i=(s.size()/2)-1;i>-1;i--) cout << s[i];
        for(i=s.size()-1;i>=(s.size()/2);i--) cout << s[i];
        cout << endl;
    }


    return 0;
}
