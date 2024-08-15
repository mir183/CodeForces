#include <iostream>
#include<deque>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl



void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>v(n);
    // cout<<"VALS?";
    for(ll i=0;i<n;i++)cin>>v[i];
    deque<deque<ll>>f;
    f.push_back(v);
    ll c=n;
    while(true){
        deque<ll>cur=f.back();
        deque<ll>nxt(n);
        for(ll i=0;i<n;i++){
            nxt[i]=count(cur.begin(),cur.end(),cur[i]);
        }
        if(nxt==cur)break;
        f.push_back(nxt);
    }
    ll q;
    // cout<<"Q?";
    cin>>q;
    while (q--)
    {
        ll x,k;
        
        cin>>x>>k;
        x--;
        // k=k%n;
        if(k<f.size()){
            cout<<f[k][x]<<endl;
        }else{
            cout<<f.back()[x]<<endl;
        }
        
    }
    
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