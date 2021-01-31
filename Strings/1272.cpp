#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n,i;
    bool esp;
    cin>>n;

    cin.ignore();
    while(n-->0){
        getline(cin, s);
        esp=true;
        for(i=0;i<s.size();i++){
            if(s[i]==' ' || s[i]=='·'){
                esp = true;
            }else if(esp){
                cout << s[i];
                esp=false;
            }
        }
        cout << endl;
    }


    return 0;
}


