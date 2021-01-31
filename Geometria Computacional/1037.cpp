#include <bits/stdc++.h>

using namespace std;

int main(){
    /*
    fstream arq, arq2;
    arq.open("debug.txt", ios::in);
    arq2.open("debug1.txt", ios::out | ios::trunc);
    */
    int r1,r2,x1,x2,y1,y2;
    double d;

    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
        d = sqrt(pow(x2-x1,2) +  pow(y2-y1,2));
        //arq2 << d << endl;
        if(r1 >= d+r2){
            cout << "RICO" << endl;
        }else{
            cout << "MORTO" << endl;
        }
    }

    return 0;
}
