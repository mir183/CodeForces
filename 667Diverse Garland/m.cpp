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
    string s,t="RGB";
    cin>>n>>s;
    ll cnt=0;
    for(ll i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            cnt++;
            for(char &c:t){
                if(c-s[i] and c-s[i+2]){
                    s[i+1]=c;
                }
            }
        }
    }
    cout<<cnt<<endl;
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