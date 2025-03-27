//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<string>
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
    deque<string>v;
    for(ll k=0;k<n;k++){
        string tmp1="",tmp2="";
        for(ll j=k;j<n;j++)tmp1+=s[j];
        for(ll j=0;j<k;j++)tmp2+=s[j];

        if((n-k)&1)reverse(tmp2.begin(),tmp2.end());
        tmp1+=tmp2;
        v.push_back(tmp1);
    }
    string ans=v.front();;
    ll position=0;
    for(ll i=1;i<n;i++){
        if(ans>v[i]){
            ans=v[i];
            position=i;
        }
    }
    cout<<ans<<endl;
    cout<<++position<<endl;

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