#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define endl '\n'
#define sq(a)  sqrt(a)
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
const int M = 1e7 + 10;

using namespace std;

vector<ll>V;
ll prime[M]={0};

void kth_prime() {
    for(ll i=2; i*i<=M; i++) {
        if(prime[i]==0) {
            for(ll j=i*i; j<=M; j+=i) {
                prime[j]=1;
            }
        }
    }

    for(ll i=2; i<=M; i++) {
        if(prime[i]==0)
        V.push_back(i);
    }

    ll k;
    cin>>k;
    cout<<V[k-1]<<endl;
}

int main() {

    opt();

    tc() {
        kth_prime();
    }
    return 0;
}

/* Input:
5
1
10
100
1000
10000

Output:
2
29
541
7919
104729
*/
