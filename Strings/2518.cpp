#include <bits/stdc++.h>

using namespace std;

int main(){
    double n, h, c, l, t;


    cout << fixed << setprecision(4);
    while(cin >> n >> h >> c >> l){
        h /= 100;
        c /= 100;
        l /= 100;
        t = sqrt((h*h)+(c*c));
        t *= n;
        cout << t*l<< endl;
    }
	return 0;
}
