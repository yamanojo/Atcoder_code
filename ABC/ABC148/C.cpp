#include <bits/stdc++.h>
using namespace std;

long euclid(long a,long b){
    long c;
    c = b%a;
    if(c==0){
        return a;
    }
    return euclid(c,a);
}

int main(){
    long A,B;
    cin >> A >> B;
    if(A==B){
        cout << A << "\n";
        return 0;
    }
    
    if (A>B){
        long tmp;
        tmp = A;
        A=B;
        B = tmp;
    }
    long l;

    l = euclid(A,B);
    long ans;
    ans = A*B
    /l;
    cout << ans << "\n";
    return 0;
}