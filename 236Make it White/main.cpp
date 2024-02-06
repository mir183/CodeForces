#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll st=0;
    ll ls=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='B' and st==0){
            st=i+1;
        }
        if(s[i]=='B' and st!=0){
            ls=i+1;
        }
    }
    cout<<abs(st-ls)+1<<endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}