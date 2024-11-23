#include <bits/stdc++.h>
using namespace std;
#define mod %
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define si stack<int>
#define sl stack<ll>
#define ss stack<string>
#define forn(i,n) for(int i = 0; i<n; i++)
#define forn2(n,i) for(int i = n; i>=0; i--)
#define forn3(n) for(auto &i : n)
#define msum(x,y,m)  ((x mod m) + (y mod m)) mod m
#define mres(x,y,m)  ((x mod m) - (y mod m)) mod m
#define mmul(x,y,m)  ((x mod m) * (y mod m)) mod m
#define mdiv(x,n,m)  expo((x mod m),n) mod m
#define pb push_back;
#define endl "\n"

ll expo(ll b, ll e ) {
    ll ans = 1;
    for(int i = 0 ; i < e ; i++) {
        ans *= b;
    }
    return ans;
}


void solve() {

}

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin.exceptions(cin.failbit);
    int T; cin>>T;
    while(T--) {
        solve();
    }

}