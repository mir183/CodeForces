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
    ll n;
    cin>>n;
    deque<ll>d(n);
    for(ll i=0;i<n;i++)cin>>d[i];
    ll g1=0,g2=0;
    for(ll i=0;i<n;i++){
        if(i%2==0){
            g1=__gcd(g1,d[i]);
        }else{
            g2=__gcd(g2,d[i]);
        }
    }
    ll a=0,b=0;
    for (ll i=1;i<n;i+=2){
        if(d[i]%g1==0){
            a=1;
            break;
        }
    }
    for(ll i=0;i<n;i+=2){
        if(d[i]%g2==0){
            b=1;
            break;
        }
    }
    if (a==1 and b==1)
        cout<<0<<endl;
    else if (a==0)
        cout<<g1<<endl;
    else
        cout<<g2<<endl;
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