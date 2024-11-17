//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <map>
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
    map<ll,ll> mp;
    while (n--)
    {
        ll l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r]--;
    }
    ll sum=0,mx=-1,maxindex;
    for(auto [x,y]:mp){
        sum+=y;
        if(sum>mx){
            mx=sum;
            maxindex=x;
        }

    }
    cout<<maxindex<<" "<<mx<<endl;

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