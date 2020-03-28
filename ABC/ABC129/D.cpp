#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;



int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll H,W;
	cin>>H>>W;
    vector<string> S(H);
    ll w_sum[H][W]= {};
    ll h_sum[H][W]= {};
    rep(i,H){
        cin>>S[i];
    }
    ll ans = 0;
    rep(i,H) rep(j,W){
        if(S[i][j]=='#') continue;
        ll h=i,w=j,tmp_ans=0;
        if(h_sum[i][j]==0){
            while(1){
                --h;
                if(h<0) break;
                if(S[h][j]=='#') break;
                ++tmp_ans;
            }
            ll min_i =h+1;
            h=i;
            while(1){
                ++h;
                if(h==H) break;
                if(S[h][j]=='#') break;
                ++tmp_ans;
            }
            ll max_i = h-1;
            for(int k=min_i;k<=max_i;k++){
                h_sum[k][j] = tmp_ans;
            }
        }else{
            tmp_ans+=h_sum[i][j];
        }
        if(w_sum[i][j]==0){
            while(1){
                --w;
                if(w<0) break;
                if(S[i][w]=='#') break;
                ++tmp_ans;
            }
            ll min_j =w+1; 
            w=j;
            while(1){
                ++w;
                if(w==W) break;
                if(S[i][w]=='#') break;
                ++tmp_ans;
            }
            ll max_j = w-1;
            for(int k=min_j;k<=max_j;k++){
                w_sum[i][k] = tmp_ans-h_sum[i][j];
            }
        }else{
            tmp_ans+=w_sum[i][j];
        }
        ++tmp_ans;
        ans = max(ans,tmp_ans);
    }

    cout<<ans<<"\n";
	
	
	return 0;
}