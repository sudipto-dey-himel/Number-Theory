#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
const ll M = 1e7+5;

vector<ll> V(M);

 void preCalc() {
    for(ll i=1; i<=M; i++) {
        for(ll j=i; j<=M; j+=i) {
            V[j]++;
        }
    }
 }


void solve() {
    ll n; cin >> n;
    cout << V[n] << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    preCalc();

    ll t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}