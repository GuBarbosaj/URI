#include <bits/stdc++.h>

using namespace std;


int main(){
    int n, x, y, r, b,c;
    cin >> n;

    while(n-->0){
        cin >> x >> y;
        r = pow((3*x),2)+pow(y,2);
        b = 2*pow(x,2)+pow((5*y),2);
        c = -100*x+pow(y,3);
        if(r>b && r>c){
            cout << "Rafael ganhou" << endl;
        }else if(b>r && b>c){
            cout << "Beto ganhou" << endl;
        }else if(c>b && c>r){
            cout << "Carlos ganhou" << endl;
        }
    }

    return 0;
}
