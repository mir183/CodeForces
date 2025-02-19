#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    deque<ll>problem(n);
    for (ll i=0;i<n;i++){
        cin>>problem[i];
    }
    
    ll ans=0;
    ll end=pow(2,n);
    for(ll i=0;i<end;i++){
        deque<ll>chosen;
        ll k=i;
        ll idx=n-1;
        ll total=0;
        while(k){
            if(k%2){
                total+=problem[idx];
                chosen.push_back(problem[idx]);
            }
            k/=2;
            if(idx-1>=0){
                idx--;
            }
        }

        if (!chosen.empty()) {
            ll mx=*max_element(chosen.begin(), chosen.end());
            ll mn=*min_element(chosen.begin(), chosen.end());
            if (total>=l && total<=r && mx-mn>=x){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
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