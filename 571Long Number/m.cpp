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
    string s;
    cin>>s;
    string f(10,'0');
    for(ll i=1;i<=9;i++){
        char c;
        cin>>c;
        f[i]=c;
    }
    ll i=0;
    while(i<n && s[i]>=f[s[i]-'0']) i++;
    while(i<n && s[i]<=f[s[i]-'0']){
        s[i]=f[s[i]-'0'];
        i++;
    }
    cout<<s<<endl;

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