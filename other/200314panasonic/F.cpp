#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll Q;
    ll a,b,c,d;
	rep(i,Q){
        cin>>a>>b>>c>>d;
        if(a/3!=c/3&&b/3!=d/3){
            cout<<(abs(a-c)+abs(b-d))<<"\n";
        }else{
            
        }
    }
	
	return 0;
}