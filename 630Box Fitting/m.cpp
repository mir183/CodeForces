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
    ll n,w;
    cin>>n>>w;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll L=1,R=w;
    while(!v.empty()){
        auto it=upper_bound(v.begin(),v.end(),R);
        if(it==v.begin()){
            R=w;
            // cout<<L<<" ";
            L++;
        }
        else{
            it--;
            int val=*it;
            R-=val;
            v.erase(it);
        }
        
    }

    // cout<<"Ans: ";
    cout<<L<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}