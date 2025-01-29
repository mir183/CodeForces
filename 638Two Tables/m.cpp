#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<numeric>
#include<climits>
#include<iomanip>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll W,H;
    cin>>W>>H;
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    ll w,h;
    cin>>w>>h;
    ll ans=LLONG_MAX;
    if(x2-x1+w<=W){
        ans=min(ans,max(0LL,w-(W-x2)));
        ans=min(ans,max(0LL,w-x1));
    }
    if(y2-y1+h<=H){
        ans=min(ans,max(0LL,h-(H-y2)));
		ans=min(ans,max(0LL,h-y1));
    }
    // cout<<"ANS: ";
    if(ans>=LLONG_MAX){
        cout<<-1<<endl;
    }else{
        cout << fixed << setprecision(10) << ans << endl;
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