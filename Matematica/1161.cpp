#include <iostream>

using namespace std;

int main(){
    int n1, n2;
    unsigned long long int f1 = 1, f2 = 1;

    while(cin >> n1 >> n2){
        for(int i = 1; i<=n1; i++){
            f1 *= i;
        }
        for(int i = 1; i<=n2; i++){
            f2 *= i;
        }
        cout << f1+f2 << endl;
        f1 = f2 = 1;
    }

    return 0;
}
