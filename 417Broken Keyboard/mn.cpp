#include <iostream>
#include<deque>
#include<algorithm>
#include<set>
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
    deque<char>d;
    if(n==1){
        cout<<s<<endl;
        return;
    }
    for(ll i=0;i<n;i++){
        ll j=i+1;
        if(s[i]==s[j]){
            i++;
        }else{
            d.push_back(s[i]);
        }

    }
    sort(d.begin(),d.end());
    set<char>st(d.begin(),d.end());
    for(auto i:st){
        cout<<i;
    }
    cout<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}