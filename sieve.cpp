#include<bits/stdc++.h>
using namespace std;
const int N = 1e8;

bitset<N> isPrime;

void sieve(int n) {
    isPrime[2] = true;
    for(int i=3; i<n; i+=2) isPrime[i] = true;
    for(int i=2; i*i<n; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<n; j+=i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n; cin>>n;
    sieve(n);
    vector<int> primes;
    for(int i=2; i<n; i++) {
        if(isPrime[i]) primes.push_back(i);
    }

    for(int i=0; i<primes.size(); i++) {
        cout<<primes[i]<<endl;
    }

    return 0;
}
