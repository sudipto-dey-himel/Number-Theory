#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define sq(a)  sqrt(a)
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;

void primeFact() {
    ll n;
    cin>>n;
    for(ll i=2; i<=sq(n); i++) {
        if(n%i==0) {
            int count=0;
            while(n%i==0) {
                count++;
                n/=i;
            }
            cout<<i<<"^"<<count<<"*";
        }
    }
    if(n>1)
    cout<<n<<"^"<<1<<endl;
}

int main() {

    opt();

    tc() {
        primeFact();
    }
    return 0;
}

/* Input : 
3
6
20
24

Output : 
2^1*3^1
2^2*5^1
2^3*3^1
*/
