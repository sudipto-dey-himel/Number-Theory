#include<bits/stdc++.h>
#include<vector>
#define ll     long long
#define endl   '\n'
#define sq(a)   sqrt(a)
#define vecst(a) sort(a.begin(), a.end())
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void solve() {
    ll n, k;
    cin>>n>>k;
    vector<ll>ans;
    for(ll i=1; i<=sq(n); i++) {
        if(n%i == 0) {
            ans.push_back(i);
            if(i != n/i)
            ans.push_back(n/i);
        }
    }
    vecst(ans);
    if(ans.size()>=k)
    cout<<ans[k-1]<<endl;
    else
    cout<<-1<<endl;
}

int main() {

    opt();

    solve();

    return 0;
}
