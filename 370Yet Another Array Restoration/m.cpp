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
    ll n,x,y;
    cin>>n>>x>>y;
    ll d=max(x,y)-min(x,y);
    ll k;
    for(auto i=d;i>0;i--){
        if(d%i==0 and n>=i+1){
            k=i;
            break;
        }
    }
    d=d/k;
    deque<ll>dq;
    ll c=y;
    while (dq.size()<n and c>0)
    {
        dq.push_back(c);
        c-=d;
    }
    while (dq.size()<n)
    {
        dq.push_back(y+d);
        y+=d;
    }
    for(auto i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    
    
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