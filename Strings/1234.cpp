#include <bits/stdc++.h>

using namespace std;


int main(){
    string s;

    while(getline(cin, s)){
        bool h = true, l = false;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' ' && h){
                s[i] = toupper(s[i]);
                h = false;
                l = true;
            }else if(s[i] != ' ' && l){
                s[i] = tolower(s[i]);
                h = true;
                l = false;
            }
        }
        cout << s << endl;
        //cin.ignore();
    }

    return 0;
}