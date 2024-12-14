#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "yes" << endl
#define no cout << "no" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>a(n),b(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a.begin(),a.end());
    if(a==b){
        yes;
        cout<<1<<" "<<1<<endl;
        return;
    }
    ll l,r;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            cnt++;
            r=i;
            if(cnt==1){
                l=i;
            }
        }
        
    }
    // reverse(b+l,b+r+1);
    reverse(b.begin() + l, b.begin() + r + 1);
    for(ll i=l;i<=r;i++){
        if(a[i]!=b[i]){
            no;return;
        }
    }
    yes;
    cout<<l+1<<" "<<r+1<<endl;

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}