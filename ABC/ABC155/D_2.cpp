#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K;
	cin>>N>>K;
    vector<ll> A;
    vector<ll> B;
    ll n0=0;
    rep(i,N){
        ll a;
        cin>>a;
        if(a>0){
            A.push_back(a);
        }else if(a<0){
            B.push_back(a*(-1));
        }else{
            ++n0;
        }
    }
    ll l_a = A.size();
    ll l_b = B.size();
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    ll min_ans = 0,max_ans = 1e18,mid_ans;
    if(K<=l_a*l_b){

        while(min_ans+1!=max_ans){
            mid_ans = (min_ans + max_ans)/2;
            int ind_b = N-1;
            ll tmp_s = 0;
            rep(i,N){
                while(A[i]*B[ind_b]>mid_ans){
                    --ind_b;
                    if(ind_b<0) break;
                }
                if(ind_b<0) break;
                tmp_s+=ind_b+1;
            }
            if(tmp_s<K){
                min_ans = mid_ans;
            }else{
                max_ans = mid_ans;
            }
        }
        return max_as 
    }else{
        K-=l_a*l_b;
        if(K<n0*(N-n0)){
            cout<<0<<"\n";
            return 0;
        }else{
            K-= n0*(N-n0);
             while(min_ans+1!=max_ans){
                mid_ans = (min_ans + max_ans)/2;
                ll tmp_s = 0;
                ll tmp_ind = l_a-1;
                rep(i,l_a){
                    while(A[i]*A[tmp_ind]>mid_ans){
                        --tmp_ind;
                        if(tmp_ind<0) break;
                    }
                    tmp_s+=tmp_ind+1;
                    if(tmp_ind>=i) --tmp_s;
                }
                tmp_ind = l_b-1;
                rep(i,l_b){
                    while(B[i]*B[tmp_ind]>mid_ans){
                        --tmp_ind;
                        if(tmp_ind<0) break;
                    }
                    tmp_s+=tmp_ind+1;
                    if(tmp_ind>=i) --tmp_s;
                }
                if(tmp_s/2<K){
                    min_ans = mid_ans;
                }else{
                    max_ans = mid_ans;
                }
                
            }
        }
    }
    cout<<max_ans<<"\n";
	
	return 0;
}