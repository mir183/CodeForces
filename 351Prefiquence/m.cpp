#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    ll ans=0,i=0,j=0;
    while(i<m and j<n){
        if(b[i]==a[j]){
            ans++;
            j++;
        }
        i++;
    }
    // cout<<"ANS: ";
    cout<<ans<<endl;
}


signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}