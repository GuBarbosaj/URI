#include <bits/stdc++.h>

using namespace std;

int main(){
    string linha;
    int v[8] = {0}, *m;
    //i,l,o,v,e,y,u,ex;

    getline(cin,linha);
    //cout << linha << endl;

    for(int i=0; i<linha.size(); i++){
        if(linha[i]=='I') v[0]++;
        if(linha[i]=='l') v[1]++;
        if(linha[i]=='o') v[2]++;
        if(linha[i]=='v') v[3]++;
        if(linha[i]=='e') v[4]++;
        if(linha[i]=='y') v[5]++;
        if(linha[i]=='u') v[6]++;
        if(linha[i]=='!') v[7]++;
    }
    v[2] /=2;

    //for(int i=0; i<8; i++) cout << v[i] << " ";


    m = min_element(v, v+8);

    cout << *m << endl;


    return 0;
}
