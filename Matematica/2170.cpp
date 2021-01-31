#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double x, y, per;

    int i = 1;
    cout << fixed << setprecision(2);
    while(cin >> x >> y){
        per = (y-x)/x*100.0;
        cout << "Projeto "<<i <<":"<< endl;
        cout << "Percentual dos juros da aplicacao: "<<per<<" %"<< endl << endl;
        i++;
    }

    return 0;
}
