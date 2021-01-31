#include <iostream>

using namespace std;

int fat(int x){
    if(x==1)
        return 1;
    else
        return fat(x-1) * x;
}


int main(){
    string n;
    int s, r;

    while(cin >> n && n != "0"){
        r = 0;
        for(int i=0; i< n.size(); i++){
            r += ((int(n[i])-48)*fat(n.size()-i));
        }
        cout << r << endl;
    }

    return 0;
}
