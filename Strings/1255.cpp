#include <bits/stdc++.h>

using namespace std;

void zerar(vector<int> &v){
    for(int i=0;i<26;i++) v[i] = 0;
}

int main(){
    int n,m,pos, mA;
    bool first;
    string s;
    vector <int> v(26,0);
    int i;
    cin >> n;
    cin.ignore();
    while(n-->0){
        getline(cin, s);
        first = true;

        for(i=0; i<s.size(); i++){
            if(isalpha(s[i])){
                v[((int)(tolower(s[i])))-97]++;
            }
        }

        while(1){
            m = -1;
            for(i=0;i<26;i++){
                if(v[i]>m){
                    m = v[i];
                    pos = i;
                }
            }
            if(first){
               mA = m;
               first = false;
            }
            if(m==mA){
                cout<<(char)(pos+97);
                v[pos] = -1;
            }else{
                break;
            }
            mA=m;
        }
        zerar(v);

        cout << endl;
    }


    return 0;
}


