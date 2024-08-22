#include <iostream>
#include<deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

deque<bool> is_prime(1000001, true);

void sieve(ll n) {
    // deque<bool> is_prime(n+1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n+1; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n+1; j += i) {
                is_prime[j] = false;
            }
        }
    }
    // for (ll i = 2; i <= n; i++) {
    //     if (is_prime[i]) {
    //         cout << i << " ";
    //     }
    // }

}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    sieve(n);
    if(n>2)cout<<2<<endl;
    else cout<<1<<endl;
    for(ll i=2;i<=n+1;i++){
        if(is_prime[i])cout<<1<<" ";
        else cout<<2<<" ";
    }cout<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}