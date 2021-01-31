#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, r, X, Y;

    while(cin >> n && n!=0){
        X = Y = 0;
        while(n-->0){
            cin >> r;
            if(r==0)
                X++;
            else
                Y++;
        }
        cout << "Mary won "<< X << " times and John won " << Y<< " times" << endl;
    }
    return 0;
}
