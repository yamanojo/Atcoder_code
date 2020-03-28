#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,M;
	cin>>N>>M;
    string ans = "";
    if(N==1){
        ans +="n";
    }
    else{
        rep(i,N){
            if(i==0){
                ans+="n";
            }else{
                ans+="n";
            }
        }
    }
    
    // cout<<ans<<"\n";
    char c;
    ll s;
    rep(i,M){
        cin>>s>>c;
        if(ans[s-1]!='n'&& ans[s-1]!=c){
            cout<<-1<<"\n";
            return 0;
        }else{
            ans[s-1] = c;
        }
    }
	rep(i,ans.length()){
        if(ans[i]=='n'){
            if(i==0&&N!=1){
                ans[i] = '1';
            }else{
                ans[i] = '0';
            }
        }
    }
    if(ans[0]=='0'&&N!=1){
        cout<<-1<<"\n";
        return 0;
    }

    cout<<ans<<"\n";
	return 0;
}