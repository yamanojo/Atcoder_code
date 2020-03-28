#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	double a,b,x;
	cin>>a>>b>>x;
    double S = a*a;
    double V = S*b;
    double ans;
    
    if(x*2<V){
        ans = atan((a*b*b)/(2*x))/M_PI_2*90;
    }else{
        ans = atan((2*(V-x))/pow(a,3))/M_PI_2*90;
        // cout<<atan((2*(V-x))/pow(a,3))<<"\n";
    }
    // cout<<M_PI_4<<"\n";
    cout<<fixed<<setprecision(10)<<ans<<"\n";
	return 0;
}