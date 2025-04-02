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


//soluation from random..
void solve() {
    // Your code here
    ll n,g,b;
    cin>>n>>g>>b;
    ll required_high_quality = (n+1)/2;

    ll full_cycle= required_high_quality/g;
    ll remining_good_days=required_high_quality%g;

    ll total_days=0;
    if(remining_good_days==0){
        total_days=full_cycle*(g+b)-b;
    }else{
        total_days=full_cycle*(g+b)+remining_good_days;
    }

    total_days=max(n,total_days);
    cout<<total_days<<endl;
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