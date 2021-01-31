#include <bits/stdc++.h>

using namespace std;


int main(){
    int r, a, b, x, y;

    while(cin >> r && r != 0){
        a = b = 0;
        while(r-->0){
            cin >> x >> y;
            if(x>y){
                a++;
            }else if(y>x){
                b++;
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}