#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N;
	cin >> N;
    string S;
    cin>>S;

    vector<int> n;
    map<int,vector<int>> n_mp;
    
    vector<int> ans(N);
    queue<int> q;
    
    rep(i,N){
        n_mp[0].push_back(i);
    }
    map<char,int> c_mp;

    q.push(0);

    while(!q.empty()){
        int ind = q.front();q.pop();
        for(int i:n_mp[ind]){
            if(c_mp.find(S[i])==c_mp.end()){
                c_mp[S[i]] = i;
            }else{
                if(c_mp[S[i]]+ans[ind]<=i){
                    n_mp[c_mp[S[i]]].insert(c_mp[S[i]]);
                    n_mp[c_mp[S[i]]].insert(ind);
                }
            }
        }
    }


    cout<<ans<<"\n";
}


