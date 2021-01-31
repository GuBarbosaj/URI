#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, i, j, a1, a2;
    string c,t1,t2;
    vector <int> v1, v2;
    bool e;

    cin >> t;
    cin.ignore();
    for(i=1; i<=t; i++){
        getline(cin, c);
        getline(cin, t1);
        getline(cin, t2);
        a1 = a2 = 0;


        for(j=0;j<c.size();j++){
            if(c[j]==t1[j]){
                a1++;
                v1.push_back(j);
            }
            if(c[j]==t2[j]){
                a2++;
                v2.push_back(j);
            }
        }

        cout << "Instancia " << i << endl;

        if(a1>a2){
            cout << "time 1" << endl;
        }else if(a2>a1){
            cout << "time 2" << endl;
        }else{
            e = true;
            for(j=0;j<v1.size();j++){
                //cout << v1[j] << " " << v2[j] << endl;
                if(v1[j]<v2[j]){
                    cout << "time 1" << endl;
                    e = false;
                    break;
                }else if(v2[j]<v1[j]){
                    cout << "time 2" << endl;
                    e = false;
                    break;
                }
            }
            if(e) cout << "empate" << endl;
        }

        v1.clear();
        v2.clear();
        cout << endl;
    }

    return 0;
}