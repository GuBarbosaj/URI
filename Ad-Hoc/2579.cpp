#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int l, c, x, y;
    cin >> l >> c >> x >> y;

    if(c%2 == 0){
        if(y%2 == 0){
            cout << "Direita" << endl;
        }else{
            cout << "Esquerda" << endl;
        }
    }else{
        if(x%2 == 0){
            if(y%2 == 0){
                cout << "Direita" << endl;
            }else{
                cout << "Esquerda" << endl;
            }
        }else{
            if(y%2 == 0){
                cout << "Esquerda" << endl;
            }else{
                cout << "Direita" << endl;
            }
        }
    }
    return 0;

}