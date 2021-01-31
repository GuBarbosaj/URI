#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, o, x, r;
    stack <int> s;
    queue <int> q;
    priority_queue <int> pq;
    bool ss, qq, pqq;


    while(cin>>n){
        ss = qq = pqq = true;
        while(n-->0){
            scanf("%d", &o);
            scanf("%d", &x);
            if(o==1){
                s.push(x);
                q.push(x);
                pq.push(x);
            }else{
                r = s.top();
                s.pop();
                if(r!=x) ss = false;

                r = q.front();
                q.pop();
                if(r!=x) qq = false;

                r = pq.top();
                pq.pop();
                if(r!=x) pqq = false;
            }
        }
        if((ss && qq) || (ss && pqq) || (qq && pqq)){
            printf("not sure\n");
        }else if(ss){
            printf("stack\n");
        }else if(qq){
            printf("queue\n");
        }else if(pqq){
            printf("priority queue\n");
        }else{
            printf("impossible\n");
        }
        while(!s.empty()) s.pop();
        while(!q.empty()) q.pop();
        while(!pq.empty()) pq.pop();
    }

    return 0;
}


