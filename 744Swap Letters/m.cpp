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
    string s,t;
    cin>>s>>t;
    ll a_cnt=count(s.begin(),s.end(),'a')+count(t.begin(),t.end(),'a');
    if(a_cnt%2!=0){
        cout<<-1<<endl;
        return;
    }

    deque<ll>a,b;
    // ll n=s.size();
    for(ll i=0;i<n;i++){
        if(s[i]!=t[i]){
            if(s[i]=='a'){
                a.push_back(i);
            }else b.push_back(i);
        }
    }

    deque<pair<ll,ll>>OP;
    if(a.size()%2!=0){
        OP.push_back({a.back(),a.back()});
        b.push_back(a.back());
        a.pop_back();
    }

    if(b.size()%2!=0){
        cout<<-1<<endl;
        return;
    }

    for(ll i=0;i<a.size();i+=2){
        OP.push_back({a[i],a[i+1]});
    }
    for(ll i=0;i<b.size();i+=2){
        OP.push_back({b[i],b[i+1]});
    }

    cout<<OP.size()<<endl;

    for(auto [x,y]:OP){
        cout<<x+1<<" "<<y+1<<endl;
    }
    



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