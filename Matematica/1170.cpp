#include <iostream>

using namespace std;

int main(){
    int n, d=0;
    double c;
    cin >> n;


    while(n > 0){

        cin >> c;

        while(c >1){
            c = c*0.5;
            d++;
        }

        cout << d << " dias" << endl;

        d=0;

        n--;
    }

    return 0;
}
