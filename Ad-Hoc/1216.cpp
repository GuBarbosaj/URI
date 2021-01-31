#include <bits/stdc++.h>

using namespace std;

int main(){
    double dis = 0, d;
    string nome;
    int a = 0;

    while(getline(cin, nome)){
        cin >> d;
        dis += d;
        a++;
        cin.ignore();
    }

    cout << fixed <<setprecision(1) << dis/a << endl;

    return 0;
}