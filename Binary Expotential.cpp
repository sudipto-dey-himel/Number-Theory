#include<bits/stdc++.h>
#define ll     long long
#define endl   '\n'
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const ll MOD = 10e7+10;

using namespace std;

ll binaryExpotential(ll n, ll k) {
    ll res=1;
    n %= MOD;
    while(k) {
        if(k&1)  res = (res*n)%MOD;
        n = (n*n)%MOD;
        k >>= 1;
    }
    return res;
}

int main() {

    opt();

    tc() {
        ll m, n;
        cin>>m>>n;
        binaryExpotential(m, n);
    }
    return 0;
}

/* Input :
3
2 10     --> 2^10
2 8      --> 2^8
2 5      --> 2^5
10 1000  -->10^1000

Output : 
1024
256
32
1000000
*/

