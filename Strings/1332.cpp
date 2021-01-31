#include <bits/stdc++.h>

using namespace std;


int main(){
    string s;
    int n;

    cin >> n;
    while(n-->0){
        cin >> s;
        int one, two, three;
        one = two = three = 0;
        if(s.size()==3){
            if(s[0] == 'o') one++;
            if(s[1] == 'n') one++;
            if(s[2] == 'e') one++;
            if(s[0] == 't') two++;
            if(s[1] == 'w') two++;
            if(s[2] == 'o') two++;
        }else if(s.size()==5){
            if(s[0] == 't') three++;
            if(s[1] == 'h') three++;
            if(s[2] == 'r') three++;
            if(s[3] == 'e') three++;
            if(s[4] == 'e') three++;
        }
        if(one>1) cout << "1" << endl;
        if(two>1) cout << "2" << endl;
        if(three>3) cout << "3" << endl;
    }

    return 0;
}