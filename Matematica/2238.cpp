#include <bits/stdc++.h>

using namespace std;

int main(){
    long long int a, b, c, d, n=0;

    cin >> a >> b >> c >> d;

    vector <int> v, v1;

    for(int j=1; j<=sqrt(c); j++){
        if(c%j==0){
            if(c/j==j){
                v.push_back(j);
            }else{
                v.push_back(j);
                v1.push_back(c/j);
            }
        }
    }

    for(int j=0; j<v1.size(); j++){
        n = c/v1[j];
        if(n%a == 0){
            if(d%n != 0){
                if(n%b != 0){
                    cout << n << endl;
                    return 0;
                }
            }
        }
    }

    for(int j=v.size()-1; j>-1; j--){
        n = c/v[j];
        if(n%a == 0){
            if(d%n != 0){
                if(n%b != 0){
                    cout << n << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;

    return 0;
}
