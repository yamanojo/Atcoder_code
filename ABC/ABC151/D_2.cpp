#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll H,W;
	cin>>H>>W;
    string S[H];
    for(int i=0;i<H;i++){
        cin>>S[i];
    }
    vector<vector<ll>> mp(H+2,vector<ll>(W+2));
    for(int i=0;i<=H+1;i++){
        for(int j=0;j<=W+1;j++){
            if(i==0||j==0||i==H+1||j==W+1){
                mp[i][j]=1;
            }else{
                if(S[i-1][j-1]=='#') mp[i][j]=1;
            }
        }
    }
    // for(int i=0;i<=H+1;i++){
    //     for(int j=0;j<=W+1;j++){
    //         cout<<mp[i][j];
    //     }
    //     cout<<"\n";
    // }
    
    typedef pair<ll,ll> P;
    ll m=0,x,y,dx[]= {1,-1,0,0},dy[] = {0,0,1,-1},ans=0;
    
    for(int i=1;i<=H;i++){
        for(int j=1;j<=W;j++){
            if(mp[i][j]!=0) continue;
            ll dist[25][25]= {};
            queue<P> qu;
            qu.push(P{i,j});
            dist[i][j]= 1;
            // cout<<i<<j<<"\n";
            while(!qu.empty()){
                tie(x,y)= qu.front();qu.pop();
                for(int k=0;k<4;k++){
                    int nx = x+dx[k],ny = y+dy[k];
                    if(dist[nx][ny]!=0||mp[nx][ny]!=0) continue;
                    dist[nx][ny]= dist[x][y]+1;
                    m = max(m,dist[nx][ny]);
                    qu.push(P{nx,ny});
                }
            }
            ans = max(ans,m-1);
        }
    }
	cout<<ans<<"\n";
	return 0;
}