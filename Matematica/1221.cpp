#include <iostream>
#include <cmath>


using namespace std;

int main(){
    long long int a;
    int n;
    cin >> n;


    while(n > 0){

        cin >> a;

        if(a == 2){
            cout << "Prime" << endl;
        }else{
            if(a%2 == 0){
                cout << "Not Prime" << endl;
            }else{
                bool p = true;
                for(int i=3; i < sqrt(a); i+=2){
                    if(a%i == 0){
                        p = false;
                        break;
                    }
                }
                if(!p) {
                    cout << "Not Prime" << endl;
                }else{
                    cout << "Prime" << endl;
                }
            }
        }
        n--;
    }

    return 0;
}
