#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int esq, dir;

    while(cin >> s){
        esq = dir = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                dir++;
            }else if(s[i] == ')'){
                if(dir != 0 )
                    dir--;
                else
                    esq++;
            }
        }
        if(dir == esq && dir == 0)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;

    }
    return 0;

}
