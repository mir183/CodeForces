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
    ll n;
    cin>>n;
    deque<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    deque<bool>done(n+1,false);
    ll current=1,need=0;
    
    for(ll i=0;i<n;i++){
        if(v[i]<=n and !done[v[i]]){
            done[v[i]]=true;
            v[i]=-1;
        }
    }


    for(ll i=0;i<n;i++){
        if(v[i]<0){
            continue;
        }

        while(current<=n and done[current]){
              current++;
        }

        if (current <= n && 2 * current < v[i]) {
            done[current] = true;
            need++;
            }
        
        

        
    }
    while(current<=n and done[current]){
        current++;
    }

    if(current<=n){
        cout<<-1<<endl;
    }else{
        cout<<need<<endl;
    }



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