// #include <bits/stdc++.h> //Uncomment while submitting
#include<iostream>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=max(0LL,(c+b-a+2)/2);
    cout<<max(0LL,c-ans+1)<<endl;


    

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