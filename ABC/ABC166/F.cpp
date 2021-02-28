#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N;
    vector<ll> ABC(3);
    cin>>N>>ABC[0]>>ABC[1]>>ABC[2];

    vector<string> S(N);
    vector<deque<ll>> q(3);
    vector<ll> abc(3);

    ll ind1,ind2;

    string ans = "Yes";

    rep(i,N){
        cin>>S[i];
        if(S[i] == "AB"){
            --ABC[0];
            --ABC[1];
            ++abc[2];
        }else if(S[i]=="AC"){
            --ABC[0];
            --ABC[2];
            ++abc[1];
        }else{
            --ABC[1];
            --ABC[2];
            ++abc[0];
        }
        rep(j,3){
            if(ABC[j]<0){
                ind1 = (j+1)%3;
                ind2 = (j+2)%3;
                ++ABC[j];
                q[j].push_back(i);
                if(abc[ind1]>0 &&abc[ind2]>0){
                    --abc[ind1];
                    --abc[ind2];
                    ++abc[i];
                }else if(abc[ind1]>0||abc[ind2]>0){
                    if(abc[ind1]>0){
                        --abc[ind1];
                    }else{
                        --abc[ind2];
                    }
                }else{
                    ans = "No";
                    goto fin;
                }
            }
        }

    }

    fin:
    cout<<ans<<"\n";

    string s;
    ll n1,n2;
    char c[] = {'A', 'B','C'};
    if(ans== "Yes"){
        rep(i,N){
            s = S[i];
            if(s== "AB"){
                n1 = 0;
                n2 = 1;
            }else if(s=="AC"){
                n1 =0;
                n2 = 2;
            }else{
                n1 = 1;
                n2 = 2;
            }
            if(q[n1].empty()){
                cout<<c[n2]<<"\n";
                q[n2].pop_front();
            }else if(q[n2].empty()){
                cout<<c[n1]<<"\n";
                q[n1].pop_front();
            }else{
                if(q[n1].front()<q[n2].front()){
                    cout<<c[n1]<<"\n";
                    q[n1].pop_front();
                }else{
                    cout<<c[n2]<<"\n";
                    q[n2].pop_front();
                }
            }
        }
        
    }
	
	return 0;
}