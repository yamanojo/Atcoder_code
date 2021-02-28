#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

    ll A,B,C,D;
    cin>>A>>B>>C>>D;
    string ans;
    while(true){
        C-=B;
        A-=D;
        if(C<=0){
            ans = "Yes";
            goto output;
        }
        if(A<=0){
            ans = "No";
            goto output;
        }
        

    }

    output:
    cout<<ans<<"\n";

	
	return 0;
}