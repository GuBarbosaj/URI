#include <bits/stdc++.h>

using namespace std;

struct aluno{
    string nome, regiao;
    long int custo;
};

bool menor (aluno a,aluno b) {
     if(a.custo < b.custo) return true;
     if(a.custo > b.custo) return false;
     if(a.custo == b.custo){
        if(a.regiao<b.regiao) return true;
        if(a.regiao>b.regiao) return false;
        if(a.regiao==b.regiao){
            if(a.nome<b.nome) return true;
            if(a.nome>b.nome) return false;
        }
     };
}

int main(){
    int q;
    while(cin >> q){
        aluno v[q];
        for(int i=0; i<q; i++) cin >> v[i].nome >> v[i].regiao >> v[i].custo;
        sort(v,v+q,menor);

        for(int i=0; i<q; i++) cout << v[i].nome << endl;
    }
    return 0;
}
