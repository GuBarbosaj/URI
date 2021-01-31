#include <iostream>

using namespace std;

int main()
{
    int n, f1, f2;
    cin >> n;

    while(n>0){
        cin >> f1 >> f2;

        int resto;

        do{
            resto = f1 % f2;
            f1 = f2;
            f2 = resto;
        } while (resto != 0);

        cout << f1 << endl;
        n--;
    }

}