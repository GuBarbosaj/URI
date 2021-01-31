#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int c, soma = 0, n, nota;

    double media, p=0.0;

    cin >> c;
    cout << fixed << setprecision(3);
    while(c > 0){
        cin >> n;
        int notas[n];
        for(int i=0; i<n; i++){
            cin >> notas[i];
            soma += notas[i];
        }
        media = soma/1.0/n;
        for(int i=0; i<n; i++){
            if(notas[i]>media){
                p++;
            }
        }
        cout << p/n*100 <<"%" <<endl;
        c--;
        p = 0;
        soma = 0;
    }

    return 0;
}
