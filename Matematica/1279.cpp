#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    long long int x, par, impar;
    int i;
    bool ord, p=false, b;

    while(cin >> s){
        if(p) cout << endl;
        x = (s[s.size()-1]-48) + ((s[s.size()-2]-48)*10);
        ord = true;
        b = false;
        if(x%4==0){
            if(!x == 0){
                cout << "This is leap year." << endl;
                ord = false;
                b = true;
            }else{
                x = ((s[s.size()-3]-48) + ((s[s.size()-4]-48)*10))*100;
                //cout << "X: " << x << endl;
                if(x%400 == 0){
                    cout << "This is leap year." << endl;
                    b = true;
                    ord = false;
                }
            }
        }
        x = 0;
        if(s[s.size()-1]=='5' || s[s.size()-1]=='0'){
            for(i=0;i<s.size();i++){
                x += (s[i]-48);
            }
            if(x%3==0){
                cout << "This is huluculu festival year." << endl;
                ord = false;
            }
        }

        par = impar = 0;

        if((s[s.size()-1]=='5' || s[s.size()-1]=='0') && b){
            for(i=0;i<s.size();i+=2){
                par += (s[i]-48);
            }
            for(i=1;i<s.size();i+=2){
                impar += (s[i]-48);
            }
            x = abs(par-impar);
            if(x%11==0){
                cout << "This is bulukulu festival year." << endl;
                ord = false;
            }
        }

        if(ord){
            cout << "This is an ordinary year." << endl;
        }
        p = true;
    }

    return 0;
}
