#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, r;
    vector <int> v;
    cin >> n;

    while(n-->0){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    vector<int>::iterator it;

    for(it = v.begin(); it !=v.end();++it){
        if(*it != *(it+1)){
            r = count(v.begin(), v.end(), *it);
            cout << *it << " aparece " << r << " vez(es)" << endl;
        }
    }

    return 0;
}