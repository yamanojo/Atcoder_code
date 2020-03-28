#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
    string S,T,U;
    cin>>S>>T;
    ll a,b;
	cin>>a>>b;

    cin>>U;
    if(S==U){
        --a;
    }else{
        --b;
    }
    cout<<a<<" "<<b<<"\n";
	
	
	return 0;
}