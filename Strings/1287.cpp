#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    int i;
    unsigned int v;
    bool erro;

    while(getline(cin,n)){
        if(n.size()==0){
            cout << "error" << endl;
        }else{
            erro = false;
            for(i=0; i<n.size(); i++){
                if(isalpha(n[i])){
                    if(n[i]=='O' || n[i]=='o'){
                        n[i] = '0';
                    }else if(n[i]=='l'){
                        n[i] = '1';
                    }else{
                        erro = true;
                        break;
                    }
                }
                if(!isdigit(n[i]) && !(n[i]==',') && !(n[i]==' ')){
                    erro = true;
                    break;
                }
            }
            if(!erro){
                string x = "";
                for(i=0; i<n.size(); i++){
                    if(isdigit(n[i])){
                        x+=n[i];
                    }
                }
                if(x.size()==0){
                    cout << "error" << endl;
                }else{
                    try{
                        v = stoi(x);
                        cout << v << endl;
                    }catch(const std::out_of_range& e){
                        cout << "error" << endl;
                    }
                }
            }else{
                cout << "error" << endl;
            }

        }
    }

    return 0;
}


