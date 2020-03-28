#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N,K;
	cin>>N>>K;
    int max_k = (N-1)*(N-2)/2;
    if(K>max_k){
        cout<<-1<<"\n";
        return 0;
    }
    int d = max_k - K;
    int M = N-1+d;
    cout<<M<<"\n";
    rep(i,N-1){
        cout<<N<<" "<<i+1<<"\n";
    }
    int i=1,j=i+1;
    while(d>0){
        cout<<i<<" "<<j<<"\n";
        --d;
        ++j;
        if(j==N){
            ++i;
            j=i+1;
        }
    }    
	return 0;
}