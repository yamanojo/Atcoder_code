#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;


int ctoi(char a){
    return (int)a-'0';
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	string N;
	cin>>N;
    int a;
    int old_a= -1;
    int over=0;
    int ans = 0;
    int dp[N.length()][2] = {};
    a = ctoi(N[N.length()-1]);
    dp[0][0] = a;
    dp[0][1] = 10-a;
    rep(i,N.length()-1){
        a = ctoi(N[N.length()-1-1-i]);
        dp[i+1][0] = min(a+ dp[i][0],a+1+dp[i][1]);
        dp[i+1][1] = min(10-a+ dp[i][0],10-(a+1)+dp[i][1]);
    }

    ans += min(dp[N.length()-1][0],dp[N.length()-1][1]+1);

    cout<<ans<<"\n";
	
	return 0;
}