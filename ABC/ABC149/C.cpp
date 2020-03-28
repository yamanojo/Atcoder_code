#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// N は6で割ってあまりが1か5(奇数)
int checker(ll N){
    ll n_max = ll(pow(N,0.5));
    for(int i=3;i<=n_max;i+=2){
        if(N%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll X;
	// 出入力
	cin >> X;

    if (X<6){
        if(X == 4){
            cout << 5 << "\n";
            return 0;
        }
        cout << X << "\n";
        return 0;
    }
    if(X%6 != 1 && X%6!= 5){
        if(X%6 ==0){
            X+=1;
        }
        else{
            X+= (5-X%6);
        }
    }

    while (checker(X)==0){
        if(X%6 == 1){
            X += 4;
        }else{
            X += 2;
        }
    }

    cout << X << "\n";


}