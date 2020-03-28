#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
    typedef pair<int,int> pair;

	int N;
	cin >> N;
    vector<vector<int>> G(N);
    vector<pair> vp;

    for(int i=1;i<N;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        G[a].emplace_back(b);
        G[b].emplace_back(a);
        vp.emplace_back(a,b);
    }

    int K = 0;
    map<pair,int> I;
    vector<int> cs(N,0);//0で初期化 

    vector<int> used(N,0);
    queue<int> q;
    used[0]=1;
    q.emplace(0);
    while(!q.empty()){
        int v = q.front();q.pop();
        if(K<(int)G[v].size()) K = G[v].size();
        int cur = 1;
        for(int u:G[v]){
            if(used[u]) continue;
            if(cur == cs[v]) cur++;
            cs[u]=I[make_pair(u,v)]=I[make_pair(v,u)]=cur++;
            used[u]=1;
            q.emplace(u);
        }
    }

    cout << K << "\n";
    for(auto p:vp) cout << I[p] << "\n";
	return 0;
}
