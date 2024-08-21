#include <iostream>
#include<string>
#include<map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    string s;
    cin>>s;
    ll n=s.size();
    map<char,ll>m;
    for(ll i=0;i<n;i++){
        m[s[i]]++;
    }
    ll minLR=min(m['L'],m['R']);
    ll minUD=min(m['U'],m['D']);
    if(minLR==0 and minUD==0){
        cout<<0<<endl;
        cout<<' '<<endl;
        return;
    }
    if(minLR==0){
        cout<<2<<endl;
        cout<<"UD"<<endl;
        return;
    }
    if(minUD==0){
        cout<<2<<endl;
        cout<<"RL"<<endl;
        return;
    }
    string ans="";
    ans+=string(minLR,'R');
    ans+=string(minUD,'U');
    ans+=string(minLR,'L');
    ans+=string(minUD,'D');
    cout<<ans.size()<<endl;
    cout<<ans<<endl;
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