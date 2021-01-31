#include <bits/stdc++.h>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    long int x;

    do{
        cin >> s;
        x = atoi(s.c_str());
        if(x>-1){
            if(s[1] == 'x' || s[1] == 'X'){
                istringstream(s) >> hex >> x;
                cout << dec << x << endl;
            }else{
                cout << "0x" << hex << uppercase << x << endl;
            }
        }else{
            return 0;
        }
    }while(1);
}
