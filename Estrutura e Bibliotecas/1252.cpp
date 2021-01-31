#include <bits/stdc++.h>

using namespace std;

long int m;

bool menor(long int i,long int j){
    if(i%m < j%m){
        return true;
    }else if(i%m > j%m){
        return false;
    }else if(i%2==0 && j%2!=0){
        return false;
    }else if(i%2!=0 && j%2==0){
        return true;
    }else if(i%2!=0 && j%2!=0){
        if(i<j){
            return false;
        }else{
            return true;
        }
    }else if(i%2==0 && j%2==0){
        if(i<j){
            return true;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long int n;

    while(cin >> n >> m && n != 0 && m != 0){
        long int *v = (long int*) malloc(n*sizeof(long int));
        for(int i=0; i<n; i++) cin >> v[i];
        sort(v, v+n, menor);
        cout << n <<" "<< m << endl;
        for(int i=0; i<n; i++) cout << v[i] << endl;
    }
    cout << n <<" " << m << endl;
    return 0;
}
