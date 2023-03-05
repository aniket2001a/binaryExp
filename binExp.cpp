#include <bits/stdc++.h>

using namespace std;
#define int long long

int mod = 1e9 + 7;

int binExpRec(int a, int b){
    if(b == 0) return 1;
    int res = binExpRec(a, b/2);
    if(b&1) return (a * ((res * 1LL * res) % mod)) % mod;
    else return (res * 1LL * res) % mod;
}

int binExpIter(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % mod;
        }
        a = (a * 1LL * a) % mod;
        b >>= 1;
    }
    return ans;
}

int bexp(int a, int b){
    int ans = 1;
    while(b){
        if(b&1){
            ans = (ans * 1LL * a) % mod;
        }
        a = (a * 1LL * a) % mod;
        b >>= 1;
    }
    return ans;
}

signed main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int a, b; cin>>a>>b;
    cout<<binExpRec(a, b)<<endl;
    cout<<binExpIter(a, b)<<endl;
    cout<<bexp(a, b)<<endl;

    return 0;
}