//#include<bits/stdc++.h> //Uncomment while submitting
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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    deque<ll>v;
    ll w=0;
    for(int i=0;i<n;i++){
        if(s[i]=='W')w++;
    }

    if(w==0){
        cout<<max(2*k-1,0LL)<<endl;
        return;
    }

    w+=k;
    if(w>=n){
        cout<<2*n-1<<endl;
        return;
    }

    ll l=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='L'){
            l++;
        }else{
            if (l>0) v.push_back(l);
            l=0;
        }
    }
    if(l!=0)v.push_back(l);
    
    if(s[0]=='L')v.pop_front();
    if(s[n-1]=='L')v.pop_back();

    sort(v.begin(),v.end());
    ll sp=0;
    ll i;
    for(i=0;i<v.size();i++){
        if(sp+v[i]>k){
            break;
        }
        sp+=v[i];
    }
    ll wl=v.size()-i;
    cout<<2*w-wl-1<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}