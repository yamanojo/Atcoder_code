#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N;
	cin>>N;
    typedef pair<int,int> P;
    vector<int> l(N+1);

    vector<vector<P>> vw(N+1);

    rep(i,N-1){
        int u,v,w;
        cin>>u>>v>>w;
        vw[u].push_back(P{v,w});
        vw[v].push_back(P{u,w});
    }

    queue<int> q;
    q.push(1);
    vector<int> ans(N+1);

    while(!q.empty()){
        int u = q.front();q.pop();
        for(auto p:vw[u]){
            int v = p.first;
            int w = p.second;
            if(l[v]==0){
                l[v]= (l[u]+w)%2+2;
                ans[v] = l[v]%2;
                q.push(v);
            }
        }
    }
    for(int i=1;i<=N;i++){
        cout<<ans[i]<<"\n";
    }

    return 0;
}
