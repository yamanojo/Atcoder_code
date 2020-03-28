#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    ll a;
    string ans = "APPROVED";
    rep(i,N){
        cin>>a;
        if(a%2==0){
            if(a%3!=0&&a%5!=0){
                ans = "DENIED";
                break;
            }           
        }
    }
    cout<<ans<<"\n";
	
	return 0;
}