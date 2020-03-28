#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

	string S;

	cin>>S;
    string ans = "Yes";
    char c1,c2;
    if(S.length()%2==1){
        ans = "No";
    }else{
        rep(i,S.length()/2){
            c1 = S[i*2];
            c2 = S[i*2+1];
            if(c1!='h'||c2!='i'){
                ans = "No";
                break;
            }
        }
    }
    cout<<ans<<"\n";
	
	return 0;
}