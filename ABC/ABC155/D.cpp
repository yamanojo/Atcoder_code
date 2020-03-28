#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

ll dev(ll a,ll b){
    ll i= 1;
    if(a<0){
        a*=-1;
        i*=-1;
    }
    if(b<0){
        b*=-1;
        i*=-1; 
    }
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K;
	cin>>N>>K;
    vector<ll> A(N);
    rep(i,N){
        cin>>A[i];
    }
    sort(A.begin(),A.end());

    ll min_ans = -1e18-1;
    ll max_ans = 1e18;
    ll tmp_ans = (max_ans + min_ans)/2;
    ll tmp_s = 0;
    ll tmp_a;
    ll max_i,min_i,mid_i;
    ll tmp;
    ll border;
    while(min_ans+1!=max_ans){
        tmp_ans = (max_ans + min_ans)/2;
        tmp_s = 0;
        rep(i,N){
            tmp_a = A[i];
            if(tmp_a>0){
                if(tmp_ans>0){
                    border = tmp_ans/tmp_a;
                }else{
                    border = ((tmp_ans*(-1))+tmp_a-1)/tmp_a *(-1);
                }
                auto itr = upper_bound(A.begin(),A.end(),border);
                tmp_s += itr-A.begin();
                if(itr-A.begin()>i) tmp_s--;
            }else if(tmp_a==0){
                if(0<tmp_ans){
                    tmp_s += N-1;
                }
            }else{
                if(tmp_ans>0){
                    border = ((tmp_ans+(-1)*tmp_a)-1)/(-1*tmp_a)*(-1);
                }else{
                    border = (tmp_ans*(-1)+(-1*tmp_a)-1)/(-1*tmp_a);
                }
                auto itr = lower_bound(A.begin(),A.end(),border);
                tmp_s += N-(itr-A.begin());
                if(itr-A.begin()-1<i) tmp_s--;
            }
        }
        // cout<<tmp_s/2<<" "<< tmp_ans<<"\n";
        if(tmp_s/2 >=K){
            max_ans = tmp_ans;
        }else{
            min_ans = tmp_ans;
        }
    }

    cout<<max_ans<<"\n";
	
	return 0;
}