#include <iostream>
#include<vector>
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
    ll n,m;
    cin>>n>>m;
    vector<vector<char>> a(n, vector<char>(m)), b(n,vector<char>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>b[i][j];
        }
    }
    bool ok=true;
    ll an,bn;


    map<char,char> p1,p2;
    p1['0']='1'; p1['1']='2'; p1['2']='0';
    p2['0']='2'; p2['1']='0'; p2['2']='1';

    for(ll i=0;i<n-1;i++){
        for(ll j=0;j<m-1;j++){
            if(a[i][j]==b[i][j])continue;
            an=a[i][j]-48;
            bn=b[i][j]-48;
            if((an+1)%3==bn){
                a[i][j] = p1[a[i][j]];
                a[i+1][j+1] = p1[a[i+1][j+1]];
                a[i][j+1] = p2[a[i][j+1]];
                a[i+1][j] = p2[a[i+1][j]];
            }else{
                a[i][j] = p2[a[i][j]];
                a[i+1][j+1] = p2[a[i+1][j+1]];
                a[i][j+1] = p1[a[i][j+1]];
                a[i+1][j] = p1[a[i+1][j]];

            }

        }
    }

    if(a==b){
        yes;
    }else no;
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