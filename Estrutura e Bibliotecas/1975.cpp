	#include <bits/stdc++.h>

using namespace std;

struct aluno{
    string nome;
    int erros = 0;
};

bool maior(aluno i, aluno j){
    if(i.erros > j.erros){
        return true;
    }else{
        return false;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int p, a, r, n;
    vector <string> per;
    set <string> l;
    string s;

    while(cin >> p >> a >> r && p!=0 && a!=0 && r!=0){
        cin.ignore();
        while(p-->0){
            getline(cin, s);
            per.push_back(s);
        }
        aluno v[a];
        for(int i=0; i<a; i++){
            cin >> v[i].nome;
            cin.ignore();
            for(int j=0; j<r; j++){
                getline(cin, s);
                if(find(per.begin(), per.end(), s) != per.end()){
                    v[i].erros++;
                }
            }
        }
        sort(v,v+a,maior);
        l.insert(v[0].nome);
        for(int i=1;i<a; i++){
            if(v[i].erros == v[i-1].erros){
                l.insert(v[i].nome);
            }else{
                break;
            }
        }
        n=0;
        for(auto it=l.begin(); it != l.end(); ++it){
            if(n==0){
                cout << *it;
                n++;
            }else{
                cout << ", " << *it;
            }
        }
        cout << endl;
        l.clear();
        per.clear();
    }
    return 0;
}
