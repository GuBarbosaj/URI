#include <bits/stdc++.h>

using namespace std;

struct asc{
    int a, q;
};

struct classcomp {
  bool operator() (const asc& a, const asc& b) const
  {
      bool f;
      if(a.q<b.q){
        return true;
      }else if(a.q>b.q){
        return false;
      }else{
        if(a.a>b.a){
            return true;
        }else{
            return false;
        }
      }
   }
};

int main(){
    /*
    fstream arq, arq2;
    arq.open("debug.txt", ios::in);
    arq2.open("debug1.txt", ios::trunc | ios::out);
    */
    string s;
    multiset<asc,classcomp> se;
    multiset<asc,classcomp>::iterator it;
    asc aux;
    int v[280], i, x, af=0;

    while(getline(cin, s)){
        if(af != 0) cout << endl;
        for(i=0; i<280; i++){
            v[i] = 0;
        }

        for(i=0;i<s.size();i++){
            x = int(s[i]);
            v[x]++;
        }

        for(i=279; i>-1; i--){
            if(v[i] != 0){
                aux.a = i;
                aux.q = v[i];
                se.insert(aux);
            }
        }

        for(it=se.begin(); it!=se.end(); ++it){
            cout << (*it).a << " " << (*it).q << endl;
        }
        af++;
        se.clear();
    }

}
