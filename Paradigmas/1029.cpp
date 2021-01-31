#include <bits/stdc++.h>

using namespace std;

long long int q = 0;

int fib(int n){
    if(n>2){
        q+=2;
        return fib(n-1)+fib(n-2);
    }else if(n==2){
        q+=2;
        return 1;
    }else{
        return 1;
    }
}


int main(){
    int n, x;
    long long int y;
    cin >> n;

    while(n-->0){
        cin >> x;
        y = fib(x);
        cout <<"fib("<<x<<") = "<< q <<" calls = " << y <<endl;
        q=0;
    }

    return 0;
}
