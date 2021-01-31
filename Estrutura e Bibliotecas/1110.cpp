#include <bits/stdc++.h>

using namespace std;

int main(){
    deque <int> d, d1;
    int n;

    while(cin >> n && n!=0){
        for(int i=1; i<=n; i++) d.push_back(i);
        while(d.size()>1){
            d1.push_back(d[0]);
            d.pop_front();
            d.push_back(d[0]);
            d.pop_front();
        }
        cout << "Discarded cards: ";
        for(int i=0; i<d1.size(); i++){
            cout << d1[i];
            if(i+1 < d1.size()) cout<< ", ";
        }
        cout << endl;

        cout << "Remaining card: " << d[0] << endl;
        d.clear();
        d1.clear();

    }



    return 0;

}
