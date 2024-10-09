#include <iostream>
#include<string>
#include<deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void change(char &c){
    if(c=='W')c='B';
    else c='W';
}

void solve(string s,char c){
    // Your code here
    ll n=s.size();
    deque<ll>v;
    for(ll i=0;i<n-1;i++){
        if(s[i]!=c){
            change(s[i]);
            change(s[i+1]);
            v.push_back(i+1);
        }
    }
    for(ll i=0;i<n;i++){
        if(s[i]!=c){
            // cout<<-1<<endl;
            return;
        }
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    exit(0);
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        solve(s,'W');
        solve(s,'B');
        cout<<-1<<endl;
    }
    return 0;
}