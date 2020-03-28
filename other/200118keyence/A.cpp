#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int H,W,N;
	cin>>H>>W>>N;

    int ans = 0;
    int s = 0;
    while(s<N){
        if(H>W){
            s+=H;
        }else{
            s+=W;
        }
        ans=ans +1;
    }
    cout<<ans<<"\n";
	
	
	return 0;
}