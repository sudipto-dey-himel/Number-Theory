#include<bits/stdc++.h>
#define ll long long
#define tc() ll test_case; cin>>test_case; while(test_case--)

using namespace std;

int gcd(ll a, ll b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int main() {
    tc() {
        ll a, b;
        cin>>a>>b;
        cout<<gcd(a, b)<<endl;
    }

    return 0;
}
