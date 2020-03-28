#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	double W,H,x,y;
	cin>>W>>H>>x>>y;
    double s;
    int way = 0;
    s = W*H/2.0;
    if(2*x==W &&2*y==H){
        way = 1;
    }
    cout<<s<<" "<<way<<"\n";
    
	return 0;
}