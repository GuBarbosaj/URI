#include <bits/stdc++.h>

using namespace std;

void Hanoi(int N,int Orig,int Dest,int Temp, int &c){
   if(N==1){
        c++;
   }else{
        Hanoi(N-1,Orig,Temp,Dest,c);
        c++;
        Hanoi(N-1,Temp,Dest,Orig,c);
   }
}

int main(){
    long int n, i = 1, v[31];
    v[1] = 1;
    for(int i=2; i<31; i++){
       v[i] = v[i-1]*2+1;
    }

    while(cin >> n && n != 0){
        //Hanoi(n,1,3,2,c);
        cout << "Teste " << i << endl;
        cout << v[n] << endl << endl;
        i++;
    }
}
