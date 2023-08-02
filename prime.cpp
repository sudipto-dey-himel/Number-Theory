#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define sq(a) sqrt(a)
#define tc()  ll test_case; cin >> test_case; while (test_case--)
#define opt() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

bool prime(ll n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (ll i = 3; i <= sq(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{

    opt();

    tc()
    {
        ll n;
        cin >> n;
        if (prime(n))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
    return 0;
}

/* Input:
5
2
13
20
1000
99991

Output:
Prime
Prime
Not Prime
Not Prime
Prime
*/
