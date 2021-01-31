#include <bits/stdc++.h>

using namespace std;

int main(){
    char p,r;
    cin >> p >> r;
    if(p == '0'){
        cout << "C" << endl;
    }else if(p == '1' && r == '0'){
        cout << "B" << endl;
    }else{
        cout << "A" << endl;
    }

    return 0;
}
