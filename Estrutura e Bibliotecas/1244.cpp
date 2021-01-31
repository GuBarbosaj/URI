#include <bits/stdc++.h>

using namespace std;

struct classcomp {
  bool operator() (const string& a, const string& b) const
  {return a.size()>b.size();}
};

int main(){
    multiset<string, classcomp> s;
    multiset<string>::iterator it;
    int n, i, c,d;
    string x, tok;
    cin >> n;
    cin.ignore();
    while(n-->0){
        getline(cin, x);
        //cin.ignore();
        //cout << x << endl;
        tok = "";
        c = 0;
        for(i=0;i<x.size();i++){
            if(x[i] != ' '){
                tok += x[i];
            }else{
                //cout << "I: " << tok << endl;
                s.insert(tok);
                tok = "";
                c++;
            }
            if(i+1==x.size()){
                //cout << "I: " << tok << endl;
                s.insert(tok);
                c++;
            }
        }
        //cout << c << endl;
        d=1;
        for(it=s.begin(); it != s.end(); ++it){
            if(d<c){
                cout << *it << " ";
                d++;
            }else{
                cout << *it;
            }
        }
        cout << endl;
        s.clear();
        //x.clear();
    }

}