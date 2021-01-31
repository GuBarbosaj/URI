#include <bits/stdc++.h>

using namespace std;

class anne{
public:
    int x, n, v, varzea, alto ,g[10][10];

    void limpar(){
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                g[i][j] = 0;
            }
        }
    }

    void setRota(int o, int d, int t){
        g[o][d] = t;
    }

    int menorDistancia(int dist[], bool s[], int V){
        int mini = INT_MAX, indice;
        for (int v = 0; v < V; v++)
        if (s[v] == false && dist[v] <= mini){
            mini = dist[v], indice = v;
        }
        return indice;
    }

    void dijkstra(int destino){
        int dist[v], u, i, c, ver;
        bool s[v];
        for (i = 0; i < v; i++){
            dist[i] = INT_MAX;
            s[i] = false;
        }
        dist[destino] = 0;
        for (c = 0; c < v-1; c++){
            u = menorDistancia(dist, s, v);
            s[u] = true;
            for (ver = 0; ver < v; ver++)
            if (!s[ver] && g[u][ver] && dist[u] != INT_MAX && dist[u]+g[u][ver] < dist[ver])
                dist[ver] = dist[u] + g[u][ver];
        }

        int hrs, minutos, hrsC = 17, minC = 30;
        hrs = dist[alto] / 60;
        minutos = dist[alto] % 60;

        if(x<=30){
            minC += minutos;
            if(minC > 59){
                hrsC++;
                minC -=60;
            }
            hrsC += hrs;
        }else{
            minC += minutos+20;
            if(minC > 59){
                hrsC++;
                minC -=60;
            }
            hrsC += hrs;
        }
        bool virou = false;
        while(hrsC > 23){
            virou = true;
            hrsC /= 24;
        }
        if(hrsC < 10 && minC < 10){
            cout << "0" << hrsC << ":0" <<minC << endl;
        }else if(hrsC < 10 && minC >= 10){
            cout << "0"<<hrsC << ":"<< minC << endl;
        }else if(hrsC >= 10 && minC < 10){
            cout << hrsC << ":0"<< minC << endl;
        }else{
            cout << hrsC << ":"<< minC << endl;
        }
        if(hrsC < 18 && !virou){
            cout << "Nao ira se atrasar" << endl;
        }else if(hrsC == 18 && minC == 0 && !virou){
            cout << "Nao ira se atrasar" << endl;
        }else{
            cout << "Ira se atrasar" << endl;
        }
    }

};


int main(){
    int x, n, v, t, v1, v2;
    string o, d;
    vector <string> pontos;
    bool achou;
    anne a;

    while(cin >> x >> n >> v && (x !=0 || n != 0 || v != 0)){
        a.limpar();
        a.v = v;
        a.n = n;
        a.x = x;
        pontos.clear();
        while(n-->0){
            cin >> o >> d >> t;
            achou = false;
            for(int i=0; i<pontos.size(); i++){
                if(o == pontos[i]){
                    v1 = i;
                    achou = true;
                }
            }
            if(!achou){
                if(o == "varzea") a.varzea = pontos.size();
                if(o == "alto") a.alto = pontos.size();
                v1 = pontos.size();
                pontos.push_back(o);
            }
            achou = false;
            for(int i=0; i<pontos.size(); i++){
                if(d == pontos[i]){
                    v2 = i;
                    achou = true;
                }
            }
            if(!achou){
                if(d == "varzea") a.varzea = pontos.size();
                if(d == "alto") a.alto = pontos.size();
                v2 = pontos.size();
                pontos.push_back(d);
            }
            a.setRota(v1, v2, t);
        }
        a.dijkstra(a.varzea);
    }


    return 0;
}
