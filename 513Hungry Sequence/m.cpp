#include <iostream>
#include<deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


const ll MAXN=10000000;
deque<bool> prime(MAXN, true);

void sieve(int n) {
    prime[0] = prime[1] = false;
    for (int p = 2; p*p <= n; p++) {
        if (prime[p]) {
            for (int i = p*p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    // for (int p = 2; p <= n; p++) {
    //     if (prime[p]) {
    //         cout << p << " ";
    //     }
    // }
}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    sieve(MAXN-1);
    ll cnt=0;
    for(ll i=3;i<MAXN and cnt<n;i++){
        if(prime[i]){
            cout<<i<<" ";
            cnt++;
        }
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