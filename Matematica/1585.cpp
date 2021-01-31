#include <iostream>

using namespace std;

int main(){
    unsigned long int n, a, b;
    cin >> n;

    while(n-->0){
        cin >> a >> b;
        cout << a*b/2 <<" cm2" << endl;
    }

    return 0;
}
