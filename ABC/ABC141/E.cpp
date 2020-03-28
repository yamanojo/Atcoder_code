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
    map<string,int> str_mp;
    // map<int,int> ans_mp;
    queue<int> q;
    rep(i,N+1){
        q.push(i);
    }
    int ans = 0;
    int ind = 0;
    int flag = false;
    string tmp_s;
    set<int> ans_s;
    while(!q.empty()){
        ind = q.front();q.pop();
        // cout<<ind;
        if(ind == N){
            if(flag ==true){
                ans++;
                str_mp.clear();
                for(auto i:ans_s){
                    q.push(i);
                }
                ans_s.clear();
                q.push(N);
                flag = false;
            }else{
                break;
            }
        }else{
            if(N-ind>=ans+1){
                tmp_s = S.substr(ind,ans+1);
                // cout<<tmp_s<<"\n";
                if(str_mp.find(tmp_s)==str_mp.end()){
                    str_mp[tmp_s]=ind;
                    // cout<<tmp_s<<"\n";
                }else{
                    if(ind-str_mp[tmp_s]>=ans+1){
                        // cout<<tmp_s<<"\n";
                        ans_s.insert(str_mp[tmp_s]);
                        ans_s.insert(ind);
                        flag = true;
                    }
                }
            }
            
        }
    }
    cout<<ans<<"\n";
}


