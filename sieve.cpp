// All prime numbers upto 1e8

#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define sq(a)  sqrt(a)
#define tc()   ll test_case;cin>>test_case;while(test_case--)
#define opt()  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

using namespace std;
const int N = 1e8;

bitset<N> isPrime;

void sieve() {
    isPrime[2] = true;
    for(int i=3; i<N; i+=2) isPrime[i] = true;
    for(int i=2; i*i<N; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<N; j+=i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    opt();
    
    sieve();
    vector<int> primes;
    for(int i=2; i<N; i++) {
        if(isPrime[i]) primes.push_back(i);
    }

    for(int i=0; i<primes.size(); i++) {
        cout<<primes[i]<<endl;
    }

    return 0;
}
