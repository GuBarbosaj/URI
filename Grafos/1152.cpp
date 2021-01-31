#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

struct TEstradas{
    long long int o, d, p;
};

bool menor(TEstradas e1, TEstradas e2) {
    return (e1.p < e2.p);
}

class Byteland{
public:
	long long int juncoes, num_estradas, peso_min = 0;
	vector<TEstradas> estradas;

	void setEstradas(long long int o,long long int d,long long int p){
		TEstradas e;
		e.o = o;
		e.d = d;
		e.p = p;
		estradas.push_back(e);
	}

	int procurar(long long int s[],long long int i){
	    while(1){
            if(s[i] == -1){
                return i;
            }else{
                i = s[i];
            }
	    }
	}

	void juntar(long long int s[],long long int o,long long int d)
	{
		int o_set = procurar(s, o);
		int d_set = procurar(s, d);
		s[o_set] = d_set;
	}

	void limpar(){
        this->peso_min = 0;
        this->estradas.clear();
	}

	void kruskal(){
	    long long int origem, destino;
		sort(estradas.begin(), estradas.end(), menor);

		long long int * s = new long long int[juncoes];

		memset(s , -1, sizeof(long long int) * juncoes);

		for(long long int i = 0; i < num_estradas; i++){
			origem = procurar(s, estradas[i].o);
			destino = procurar(s, estradas[i].d);
			if(origem != destino){
                peso_min += estradas[i].p;
				juntar(s, origem, destino);
			}
		}
	}
};

using namespace std;

int main(){
    long long int m, n, x, y, z;
    long long int custo = 0;
    Byteland b;

    while(cin >> m >> n && (m != 0 || n != 0)){
        b.juncoes = m;
        b.num_estradas = n;
        while(n-->0){
            cin >> x >> y >> z;
            custo += z;
            b.setEstradas(x,y,z);
        }
        b.kruskal();
        cout << custo - b.peso_min << endl;
        b.limpar();
        custo = 0;
    }

    return 0;
}
