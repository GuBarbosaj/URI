#include <iostream>

using namespace std;

int main(){
    int n, led=0;
    string num;
    cin >> n;
    while(n > 0){
        cin >> num;
        for(int i=0; i<num.size(); i++){
            if(num[i]=='8') led += 7;
            if(num[i]=='6' || num[i]=='9' || num[i]=='0') led += 6;
            if(num[i]=='2' || num[i]=='3' || num[i]=='5') led += 5;
            if(num[i]=='4') led += 4;
            if(num[i]=='7') led +=3;
            if(num[i]=='1') led += 2;
        }
        cout << led << " leds" << endl;
        led = 0;
        n--;
    }


    return 0;
}