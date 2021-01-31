#include <bits/stdc++.h>

using namespace std;

const double g = 9.80665;
const double pi = 3.14159;

int main(){
    double h,a,v, vx, vy, t, x;
    int p1, p2, n;

    while(cin >> h >> p1 >> p2 >> n){
        while(n-->0){
            cin >> a >> v;
            vx = v*cos(a*pi/180);
            vy = v*sin(a*pi/180);
            double a1,b1,c1, delta, r1, r2;
            c1 = h;
            b1 = vy;
            a1 = (-g/2);
            delta = pow(b1,2)-4*a1*c1;
            if(delta>=0 && a1 != 0){
                r1 = (-1.0*b1+(sqrt(delta)))/(2*a1);
                r2 = (-1.0*b1-(sqrt(delta)))/(2*a1);
            }
            if(r1>=0){
                t = r1;
            }else if(r2>=0){
                t = r2;
            }
            x = vx*t;
            cout << fixed << setprecision(5);
            if(x>=p1 && x<=p2){
                cout << x << " -> DUCK" << endl;
            }else{
                cout << x << " -> NUCK" << endl;
            }

        }
    }

    return 0;
}
