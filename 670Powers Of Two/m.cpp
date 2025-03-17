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
    ll n,k;
    cin>>n>>k;
    ll sum=k;
    deque<ll>v(k,1);
    for(ll i=0;i<k;i++){
        while(sum+v[i]<=n){
            sum+=v[i];
            v[i]*=2;
        }
    }
    if(sum!=n){
        no;
    }else{
        yes;
        for(auto i:v)cout<<i<<" ";
        cout<<endl;
    }
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