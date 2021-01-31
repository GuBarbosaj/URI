#include <iostream>

using namespace std;

int main(){
    long int n, a1, b1, mmc;

    while(cin >> n >> a1 >> b1 && n!=0 && a1!=0 && b1!=0){
        long int resto, a, b;

        a = a1;
        b = b1;

        do{
            resto = a % b;
            a = b;
            b = resto;

        } while (resto != 0);

        long int mdc = (a1*b1)/a;

        cout << (n/a1) + (n/b1) - (n/mdc) << endl;
    }


    return 0;
}
