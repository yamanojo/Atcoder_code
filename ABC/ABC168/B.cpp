#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll K;
    string S;
    cin>>K>>S;
    if(S.size()>K){
        cout<<S.substr(0,K)<<"..."<<"\n";
    }else{
        cout<<S<<"\n";
    }
	
	return 0;
}