#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    double A,B,H,M;
    cin>>A>>B>>H>>M;
    double theta;

    theta = (H/12-M*11/(60*12))*2*M_PI;
    double ans;
    // cout<<cos(theta)<<"\n";
    ans = sqrt(A*A + B*B - 2*A*B*cos(theta));
    cout<<fixed<<setprecision(11)<<ans<<"\n";
	return 0;
}