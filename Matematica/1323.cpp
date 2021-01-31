#include <bits/stdc++.h>

using namespace std;

int quadrados(int n){
    if(n>1){
        return (n*n)+quadrados(n-1);
    }else{
        return 1;
    }
}

int main(){
    int n;

    while(cin >> n && n!=0){
        cout << quadrados(n) << endl;
    }
    return 0;
}
