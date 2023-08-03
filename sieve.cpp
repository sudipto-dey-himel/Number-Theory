#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define sq(a)  sqrt(a)
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void sieve() {
    ll n;
    cin>>n;
    ll prime[n+5];   //ll prime[n+5]={0} -> *if we use this then the memset function will be removed*
    memset(prime, 0, sizeof(prime));

    for(ll i=2; i*i<=n; i++) {
        if(prime[i]==0) {
            for(ll j=i*i; j<=n; j+=i) {
                prime[j]=1;
            }
        }
    }

    for(ll i=2; i<=n; i++) {
        if(prime[i]==0)
        cout<<i<<" ";
    }
    cout<<endl;
}

int main() {

    opt();

    tc() {
        sieve();
    }
    return 0;
}

/* Input:
1
30

Output:
2 3 5 7 11 13 17 19 23 29
*/
