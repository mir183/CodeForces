#include <iostream>
#include <deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    deque<deque<ll>> v(n,deque<ll>(m));
    bool pb=false;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>v[i][j];
            // if(v[i][j]>4) pb=true;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if((i==0 || i==n-1) && (j==0 || j==m-1)){
                if(v[i][j]>2) pb=true;
                // break;
            }
            else if(i==0 || i==n-1 || j==0 || j==m-1){
                if(v[i][j]>3) pb=true;
                // break;
            }
            else{
                if(v[i][j]>4) pb=true;
                // break;
            }
        }
    }
    if(pb){
        no;
        return;
    }
    yes;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if((i==0 || i==n-1) && (j==0 || j==m-1)){
                cout<<2<<" ";
            }
            else if(i==0 || i==n-1 || j==0 || j==m-1){
                cout<<3<<" ";   
            }
            else{
                cout<<4<<" ";
            }
        }
        cout<<endl;
    }
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