#include <iostream>

using namespace std;

int main(){
    int n, j, i;
    bool e;
    string a, b;
    cin >> n;

    while(n-->0){
        cin >> a >> b;
        if(b.size()>a.size()){
            cout << "nao encaixa" << endl;
        }else{
            e = true;
            j = a.size()-1;
            for(i=b.size()-1; i>-1; i--){
                if(b[i] !=  a[j]){
                    e = false;
                    break;
                }
                j--;
            }
            if(e)
                cout << "encaixa" << endl;
            else
                cout << "nao encaixa" << endl;
        }
    }
    return 0;
}
