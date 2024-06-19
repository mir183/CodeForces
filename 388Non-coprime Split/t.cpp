#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll divisor(ll n){
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0)return i;
    }
    return n;
}


void solve() {
    // Your code here
    ll l,r;
    cin>>l>>r;
    if(r<4){
        cout<<-1<<endl;
    }else if(l<r){
        if(r%2)r--;
        cout<<r/2<<" "<<r/2<<endl;
    }else if(l==r){
        ll a=divisor(l);
        if(a==l){
            cout<<-1<<endl;
        }else{
            cout<<a<<" "<<l-a<<endl;
        }

    }
    
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