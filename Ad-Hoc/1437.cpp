#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, dir;
    char s;

    while(cin >> n && n!=0){
        dir = 0;
        while(n-->0){
            cin >> s;
            if(s == 'D'){
                dir++;
            }else{
                dir--;
            }
        }
        if(dir>-1){
            dir= abs(dir);
            dir = dir%4;
            if(dir == 0) cout << "N" << endl;
            if(dir == 1) cout << "L" << endl;
            if(dir == 2) cout << "S" << endl;
            if(dir == 3) cout << "O" << endl;
        }else{
            dir= abs(dir);
            dir = dir%4;
            if(dir == 0) cout << "N" << endl;
            if(dir == 1) cout << "O" << endl;
            if(dir == 2) cout << "S" << endl;
            if(dir == 3) cout << "L" << endl;
        }

    }

    return 0;
}
