#include <bits/stdc++.h>

using namespace std;

int main(){
    /*
    fstream arq, cout;
    arq.open("debug.txt", ios::in);
    cout.open("debug1.txt", ios::out | ios::trunc);
    */
    string s, x;
    int n,j;
    bool e = true;
    cin >> n;

    while(n-->0){
        cin >> s >> x;
        j = x.size() -1;
        e = true;
        if(x.size() <= s.size()){
            for(int i=s.size()-1; i>-1; i--){
                //cout << s[i] <<" : "<< x[j] << endl;
                if(s[i] != x[j]){
                    e = false;
                    break;
                }
                j--;
                if(j==-1) break;
            }
            if(e){
                cout << "encaixa" << endl;
            }else{
                cout << "nao encaixa" << endl;
            }
        }else{
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}