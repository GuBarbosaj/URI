#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    char o;
    int x, y, res;

    cin >> a >> o >> b;

    for(int i=0; i<a.size(); i++){
        if(a[i] == '7') a[i] = '0';
    }

    for(int i=0; i<b.size(); i++){
        if(b[i] == '7') b[i] = '0';
    }

    stringstream g1(a);
    g1 >> x;
    stringstream g2(b);
    g2 >> y;

    if(o == '+'){
        res = x+y;

    }else{
        res = x*y;
    }

    stringstream g3;
    g3 << res;
    a = g3.str();

    for(int i=0; i<a.size(); i++){
        if(a[i] == '7') a[i] = '0';
    }

    stringstream g4(a);
    g4 >> x;

    cout << x << endl;

    return 0;

}
