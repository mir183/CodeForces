//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include <set>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;
const ll MOD = 1000000007;
const ll MAX = 100005;

ll mul(ll a, ll b){
    return (a*b)%MOD;
}

ll mp1[MAX * 4];
void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>a(n+1),b(n+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        mp1[a[i]]=i;
    }
    for(ll i=1;i<=n;i++){
        cin>>b[i];
    }
    ll tot=1;
    set<ll>st;
    for(ll i=1;i<=n;i++){
        st.insert(mp1[b[i]]);
    }
    while (!st.empty())
    {
        deque<ll>save;
        for(auto it:st){
            save.push_back(it);
            ll y=mp1[b[it]];
            while(y!=it){
                save.push_back(y);
                y=mp1[b[y]];
            }
            break;
        }
        for(auto it:save){
            st.erase(it);
        }
        tot=mul(tot,2);
    }
    cout<<tot<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}