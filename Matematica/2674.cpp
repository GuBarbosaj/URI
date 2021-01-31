#include <bits/stdc++.h>

using namespace std;

 bool primo(int n) {
    if(n<=1)
        return false;

    if(n<=3)
        return true;

    if(n%2==0||n%3==0)
        return false;

    for(int i=5;i*i<=n;i=i+6) {
        if(n%i==0||n%(i+2)==0)
            return false;
    }

    return true;
}


bool super(int x){
    int r = x%10;
    while(x > 0){
        if(!primo(r)) return false;
        x = x/10;
        r = x%10;
    }
    return true;
}

int main(){
    unsigned int n;
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    while(cin >> n){
        if(primo(n)){
            if(super(n)){
                cout << "Super" << endl;
            }else{
                cout << "Primo" << endl;
            }
        }else{
            cout << "Nada" << endl;
        }
    }

    return 0;
}
