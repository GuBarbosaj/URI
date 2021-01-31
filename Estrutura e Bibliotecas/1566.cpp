#include <bits/stdc++.h>

using namespace std;

int main(){
    int nc, h, i, k, x;
    scanf("%i", &nc);

    int *v = (int*) malloc(231*sizeof(int));

    for(i=0; i<231; i++) v[i] = 0;

    while(nc-->0){
        scanf("%i", &h);

        while(h-->0){
            scanf("%i", &x);
            v[x]++;
        }

        for(i=20; i<231; i++){
            if(v[i] != 0){
                printf("%d", i);
                v[i]--;
                k = i;
                break;
            }
        }

        for(i=k; i<231; i++){
            if(v[i] != 0){
                printf(" %d", i);
                v[i]--;
                i--;
            }
        }

        printf("\n");

    }

    return 0;
}
