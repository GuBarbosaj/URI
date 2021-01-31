#include <bits/stdc++.h>

using namespace std;

struct no{
    int n;
    no *esq,*dir;
};

struct arvore{
    no *raiz = NULL;
};

void inserir(int i, no *&n){
    if(n == NULL){
        n = new no;
        n->n = i;
        n->esq = NULL;
        n->dir = NULL;
    }else if(i < n->n){
        inserir(i, n->esq);
    }else{
        inserir(i, n->dir);
    }
}

void pre(no *n, int &x){
    if(n != NULL){
        cout << n->n;
        x--;
        if(x != 0){
            cout << " ";
        }else{
            cout << endl;
        }
        pre(n->esq, x);
        pre(n->dir, x);
    }
}

void in(no *n, int &x){
    if(n != NULL){
        in(n->esq, x);
        cout << n->n;
        x--;
        if(x != 0){
            cout << " ";
        }else{
            cout << endl;
        }
        in(n->dir, x);
    }
}

void pos(no *n, int &x){
    if(n != NULL){
        pos(n->esq, x);
        pos(n->dir, x);
        cout << n->n;
        x--;
        if(x != 0){
            cout << " ";
        }else{
            cout << endl;
        }
    }
}

int main(){
    arvore a;
    int c, x, y, z, aa, i, k;

    cin >> c;

    for(k=1;k<=c;k++){
        cin >> x;
        for(i=0;i<x;i++){
            cin >> y;
            inserir(y, a.raiz);
        }
        z = aa = x;
        cout << "Case " << k << ":" << endl;
        cout << "Pre.: ";
        pre(a.raiz,x);
        cout << "In..: ";
        in(a.raiz, z);
        cout << "Post: ";
        pos(a.raiz, aa);
        a.raiz = NULL;
        cout << endl;
    }
}
