#include<bits/stdc++.h>
using namespace std;
const int N = 1e8;

vector<bool> isPrime(N, true);

void sieve(int n) {
    isPrime[0] = isPrime[1] = false;
    for(int i=2; i*i<=n; i++) {
        if(isPrime[i]) {
            for(int j=i*i; j<=n; j+=i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n; cin >> n;
    sieve(n);
    vector<int> primes;
    for(int i=2; i<n; i++) {
        if(isPrime[i]) primes.push_back(i);
    }

    for(int i=0; i<primes.size(); i++) {
        cout << primes[i] << endl;
    }

    return 0;
}
