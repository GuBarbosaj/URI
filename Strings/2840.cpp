#include <bits/stdc++.h>

using namespace std;

const double pi = 3.1415;

int main(){
    int b;
    double r,l,v;
    cin >> r >> l;
    v = (4.0/3)*(pi*pow(r,3));
    b = l/v;
    cout << b << endl;
    return 0;
}
