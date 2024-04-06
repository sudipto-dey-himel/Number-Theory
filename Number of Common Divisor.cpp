#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

ll count_common_divisor(ll a, ll b) {
    ll n = __gcd(a, b);
    ll count = 0;
    for(ll i=1; i*i <= n; i++) {
        if(n%i == 0) {
            count += 2;
            if(i*i == n) count--;
        }
    }
    return count;
}

void solve() {
    ll a, b; cin>>a>>b;
    cout<<count_common_divisor(a, b)<<endl;
}

int main() {
    opt();
    tc() {
        solve();
    }

    return 0;
}


/* Input:
3
100000 100000
12 24
747794 238336

Output:
36
6
2
*/
