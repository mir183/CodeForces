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
    ll n,u,r,d,l;
    cin>>n>>u>>r>>d>>l;
    ll u1=u;
    ll r1=r;
    ll l1=l;
    ll d1=d;

    if(u==n){l1--;r1--;}
    if(d==n){l1--;r1--;}
    if(l==n){u1--;d1--;}
    if(r==n){u1--;d1--;}

    if(u==n-1){
        if(l1>r1)l1--;
        else r1--;
    }
    if(d==n-1){
        if(l1>r1)l1--;
        else r1--;
    }
    if(l==n-1){
        if(u1>d1)u1--;
        else d1--;
            
    }
    if(r==n-1){
        if(u1>d1)u1--;
        else d1--;
    }
    if(l1<0 or r1<0 or u1<0 or d1<0){
        no;
    }
    else yes;

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