#include <iostream>
#include <cmath>
#include <iomanip>

const double pi = 3.1415926535897;


using namespace std;

int main(){
    long int a,b,c;
    long double s,v,r, raio, ma, p, x;
    cout << fixed << setprecision(4);

    while(cin>>a>>b>>c){
        p = (a+b+c)/2.0;
        x = sqrt(p*(p-a)*(p-b)*(p-c));
        raio = x/p;
        r = pi*pow(raio,2);
        v = x-r;
        raio = (a*b*c)/(4*x);
        s = (pi*pow(raio,2)) - x;

        cout << s <<" "<< v << " " << r << endl;

    }


    return 0;
}
