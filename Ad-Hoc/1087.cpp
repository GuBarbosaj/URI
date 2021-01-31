#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2;

    while(cin>>x1>>y1>>x2>>y2 && x1 != 0){
        if(x1 == x2 && y1 == y2){
            cout << 0 << endl;
        }else if(x1 == x2 || y1 == y2){
            cout << 1 << endl;
        }else{
            bool one = false;
            for(int i=1; i<8; i++){
                if(x1+i == x2 && y1+i == y2){
                    one = true;
                    break;
                }
                if(x1+i == 8 || y1+i == 8) break;
            }
            for(int i=1; i<8; i++){
                if(x1+i == x2 && y1-i == y2){
                    one = true;
                    break;
                }
                if(x1+i == 8 || y1-i == 8) break;
            }
            for(int i=1; i<8; i++){
                if(x1-i == x2 && y1-i == y2){
                    one = true;
                    break;
                }
                if(x1-i == 8 || y1-i == 8) break;
            }
            for(int i=1; i<8; i++){
                if(x1-i == x2 && y1+i == y2){
                    one = true;
                    break;
                }
                if(x1-i == 8 || y1+i == 8) break;
            }
            if(one){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
    }

    return 0;

}
