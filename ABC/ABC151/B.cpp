#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N,K,M;
	cin >> N>>K>>M;

    int s=0;
    s = N*M;
    int a;
    for(int i=0;i<N-1;i++){
        cin>>a;
        s-=a;
    }

    if(s<=0){
        cout<<0<<"\n";
    }else if(s>K){
        cout<<-1<<"\n";
    }else{
        cout<<s<<"\n";
    }


	
	return 0;
}