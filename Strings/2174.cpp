#include <iostream>
#include <set>

using namespace std;

int main(){
    set <string> s;
    string x;
    int n;

    cin >> n;

    while(n-->0){
        cin >> x;
        s.insert(x);
    }

    cout << "Falta(m) "<< 151-s.size() <<" pomekon(s)." << endl;

}
