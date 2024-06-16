#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    deque<ll>bin={10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000};
    reverse(bin.begin(),bin.end());
    ll n;
    cin>>n;
    for(ll i=0;i<bin.size();i++){
        if(bin[i]<=n and n%bin[i]==0){
            while (n%bin[i]==0)
            {
                n/=bin[i];
            }
            
        }
    }
    if(n==1)yes;
    else no;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}