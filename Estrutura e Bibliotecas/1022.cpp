#include <bits/stdc++.h>

using namespace std;

int main(){
    int n1,n2,d1,d2,t,r1,k1,i,mi;
    char o, l;

    cin >> t;

    while(t-->0){
        cin >>n1>>l>>d1>>o>>n2>>l>>d2;
        if(o=='+'){
            r1 = (n1*d2 + n2*d1);
            k1 = (d1*d2);
            cout << r1 << "/" << k1;
            mi = abs(min(r1,k1));
            for(i=mi;i>0;i--){
                if(r1%i==0 && k1%i==0){
                    r1 = r1/i;
                    k1 = k1/i;
                }
            }
            cout << " = "<<r1 << "/" << k1 << endl;
        }else if(o=='-'){
            r1 = (n1*d2 - n2*d1);
            k1 = (d1*d2);
            cout << r1 << "/" << k1;
            mi = abs(min(r1,k1));
            for(i=mi;i>0;i--){
                if(r1%i==0 && k1%i==0){
                    r1 = r1/i;
                    k1 = k1/i;
                }
            }
            cout << " = "<<r1 << "/" << k1 << endl;
        }else if(o=='*'){
            r1 = (n1*n2);
            k1 = (d1*d2);
            cout << r1 << "/" << k1;
            mi = abs(min(r1,k1));
            for(i=mi;i>0;i--){
                if(r1%i==0 && k1%i==0){
                    r1 = r1/i;
                    k1 = k1/i;
                }
            }
            cout << " = "<<r1 << "/" << k1 << endl;
        }else{
            r1 = (n1*d2);
            k1 = (n2*d1);
            cout << r1 << "/" << k1;
            mi = abs(min(r1,k1));
            for(i=mi;i>0;i--){
                if(r1%i==0 && k1%i==0){
                    r1 = r1/i;
                    k1 = k1/i;
                }
            }
            cout << " = "<<r1 << "/" << k1 << endl;
        }
    }

    return 0;
}