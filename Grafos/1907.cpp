#include <bits/stdc++.h>

using namespace std;

struct pontos
{
    int i,j;
};


int main()
{
    string m[1024],x;
    int l,c,i,j,cont = 0;
    cin >> l >> c;
    vector <pontos> v;
    pontos pos,vpont;
    cin.ignore();
    for(i=0;i<l;i++)
    {
        getline(cin,m[i]);
    }

    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            if(m[i][j] == '.')
            {
                cont++;
                
                m[i][j] = '-1';
                pos.i = i;
                pos.j = j;
                v.push_back(pos);
                while(!v.empty())
                {
                    vpont = v.back();
                    v.pop_back();
                    if(vpont.i - 1 >= 0)
                    {
                        if(m[vpont.i-1][vpont.j] == '.')
                        {
                            m[vpont.i-1][vpont.j] = '-1';
                            pos.i = vpont.i-1;
                            pos.j = vpont.j;
                            v.push_back(pos);
                        }
                    }
                    if(vpont.i + 1 < l)
                    {
                        if(m[vpont.i+1][vpont.j] == '.')
                        {
                            m[vpont.i+1][vpont.j] = '-1';
                            pos.i = vpont.i+1;
                            pos.j = vpont.j;
                            v.push_back(pos);
                        }
                    }
                    if(vpont.j - 1 >= 0)
                    {
                        if(m[vpont.i][vpont.j-1] == '.')
                        {
                            m[vpont.i][vpont.j-1] = '-1';
                            pos.i = vpont.i;
                            pos.j = vpont.j-1;
                            v.push_back(pos);
                        }
                    }
                    if(vpont.j + 1 < c)
                    {
                        if(m[vpont.i][vpont.j+1] == '.')
                        {
                            m[vpont.i][vpont.j+1] = '-1';
                            pos.i = vpont.i;
                            pos.j = vpont.j+1;
                            v.push_back(pos);
                        }
                    }
                }
            }
        }
    }

    cout << cont << endl;


    return 0;
}