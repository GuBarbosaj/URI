#include <iostream>

using namespace std;

int main(){
    int n, y, x = 1;

    cin >> n;

    do{
        y = n / 2;
        cout << "Experiment " << x << ": " << y << " full cycle(s)" << endl;
        cin >> n;
        x++;
    }while(n != -1);

    return 0;
}
