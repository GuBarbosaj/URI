#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, pos, i;
    string s;
    cin >> n;

    cin.ignore();
    while(n-->0){
        getline(cin, s);
        for(i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                s[i]+=3;
            }
        }
        reverse(s.begin(), s.end());
        for(i=s.size()/2; i<s.size(); i++){
            s[i]--;
        }
        cout << s << endl;
    }

    return 0;
}
