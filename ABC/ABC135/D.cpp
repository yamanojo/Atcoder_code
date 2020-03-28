#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
ll MOD = 1e9+7;

int ctoi(char a){
    return (int)a-'0';
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	string S;
	cin>>S;
    ll mod13[13][13]={};
    rep(i,13){
        rep(j,10){
            mod13[i][(i*j)%13]+=1;
        }
    }
    // rep(i,13){
    //     rep(j,13){
    //         cout<<mod13[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    ll dp[13]={};
    ll l = S.length();
    if(S[l-1]=='?'){
        rep(i,13){
            dp[i]=mod13[1][i];
        }
    }else{
        dp[ctoi(S[l-1])]=1;
    }
    
    ll m = 1;
    ll num;
    ll tmp_dp[13]= {};
	rep(i,S.length()-1){
        // rep(i,13){
        //     cout<<dp[i];
        // }
        // cout<<"\n";
        rep(j,13){
            tmp_dp[j] = dp[j];
            dp[j] = 0;
        }
        m = (m*10)%13;
        if(S[l-2-i]=='?'){
            rep(j,13){
                if(mod13[m][j]==0) continue;
                rep(k,13){
                    dp[(j+k)%13]= (dp[(j+k)%13]+tmp_dp[k])%MOD;
                }
            }
        }else{
            num = ctoi(S[l-2-i]);
            rep(j,13){
                dp[(j+num*m)%13] = tmp_dp[j];
            }
        }
    }

    cout<<dp[5]<<"\n";
    // rep(i,13){
    //     cout<<dp[i];
    // }
    // cout<<"\n";
	
    return 0;
}