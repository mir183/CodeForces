//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<map>
#include<set>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    // ll n;
    // cin>>n;
    // deque<ll>a(n);
    // deque<ll>b(n);
    // deque<ll>posA(n);
    // deque<ll>posB(n);
    // for(ll i=0;i<n;i++){
    //     cin>>a[i];
    // }
    // for(ll i=0;i<n;i++){
    //     cin>>b[i];
    // }
    // for(ll i=0;i<n;i++){
    //     posB[b[i]]=i;
    // }
    // for (ll i=0;i<n;i++) {
    //     posA[i]=posB[a[i]];
    // }

    // ll mx=-1,cnt=0;
    // for(ll i=0;i<n;i++){
    //     if(posA[i]>mx){
    //         mx=posA[i];
    //     }else{
    //         cnt++;
    //     }
    // }
    // cout<<cnt<<endl;
    set<ll>st;
    ll n;
    cin>>n;
    deque<ll>v(n+1);
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v[x]=i;
        st.insert(i);
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        ll id=v[x];
        //5
// 3 5 2 1 4
// 4 3 2 5 1

        // cout<<*st.begin()++;
        if(*st.begin()<id){
            cnt++;
        }
        st.erase(id);
    }
    cout<<cnt<<endl;






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