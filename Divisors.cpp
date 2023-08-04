#include<bits/stdc++.h>
#define ll     long long
#define endl   '\n'
#define sq(a)   sqrt(a)
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void divisors() {
    ll n;
    cin>>n;
    set<ll>s;
    for(ll i=1; i<=sq(n); i++) {
        if(n%i==0) {
            s.insert(i);
            s.insert(n/i);
        }
    }
    for(auto x:s)
    cout<<x<<" ";

    cout<<endl;
}

int main() {
    opt();
    tc() {
        divisors();
    }

    return 0;
}


/* Input : 
3
12
36
77

Output : 
1 2 3 4 6 12 
1 2 3 4 6 9 12 18 36 
1 7 11 77
*/
