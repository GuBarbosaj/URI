#include <bits/stdc++.h>

using namespace std;

int main(){
    char a,b,c;

    while(cin >> a >> b >> c){
        if(a == b && b == c){
            cout << "*" << endl;
        }else if(a != b && a != c){
            cout << "A" << endl;
        }else if(b != a && b != c){
            cout << "B" << endl;
        }else if(c != a && c != b){
            cout << "C" << endl;
        }
    }

    return 0;
}