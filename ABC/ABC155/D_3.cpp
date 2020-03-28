#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

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

    ll min_ans = -1e18;
    --min_ans;
    ll max_ans = 1e18;
    ll tmp_ans;
    ll tmp_s = 0;
    ll tmp_a;
    ll max_i,min_i,mid_i;
    ll tmp;
    ll border;
    ll debug = 0;
    // cout<<min_ans<<"\n";
    while(min_ans+1!=max_ans){
        tmp_ans = (max_ans + min_ans)/2;
        tmp_s = 0;
        rep(i,N){
            tmp_a = A[i];
            if(tmp_a>0){
                border = tmp_ans/tmp_a;
                while(border*tmp_a < tmp_ans) ++border;
                while(border*tmp_a > tmp_ans) --border;
                auto itr = upper_bound(A.begin(),A.end(),border);
                tmp_s += itr-A.begin();
                if(itr-A.begin()>i) tmp_s--;
            }else if(tmp_a==0){
                if(0<=tmp_ans){
                    tmp_s += N-1;
                }
            }else{    
                border = tmp_ans/tmp_a;
                while(border*tmp_a > tmp_ans) ++border;
                while(border*tmp_a <= tmp_ans) --border;
                auto itr = upper_bound(A.begin(),A.end(),border);
                tmp_s += N-(itr-A.begin());
                if(!(itr-A.begin()>i)) tmp_s--;
            }
        }
        // if(debug>55) cout<<tmp_s/2<<" "<< tmp_ans<<"\n";
        // cout<<tmp_s/2<<" "<< tmp_ans<<"\n";
        if(tmp_s/2 >=K){
            max_ans = tmp_ans;
        }else{
            min_ans = tmp_ans;
        }
        ++debug;
        
    }
    // cout<<debug<<"\n";
    // cout<<min_ans<<"\n";
    cout<<max_ans<<"\n";
	
	return 0;
}