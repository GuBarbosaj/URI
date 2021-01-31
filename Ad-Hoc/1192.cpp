#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,n;
    string s;

    cin >> n;

    while(n-->0){
        cin >> s;
        a = int(s[0])-int(48);
        b = int(s[2])-int(48);

        if(a == b){
            cout << a*b << endl;
        }else if(isupper(s[1])){
            cout << b-a << endl;
        }else{
            cout << a+b << endl;
        }
    }

    return 0;
}
