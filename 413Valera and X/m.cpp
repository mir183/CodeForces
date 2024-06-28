#include <iostream>
#include<deque>
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
    ll n;
    cin>>n;
    map<char,ll>m;
    deque<deque<char>> dp(n, deque<char>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            char a;
            cin>>a;
            m[a]++;
            dp[i][j]=a;
        }
    }
    if(m.size()!=2){
        no;
        return;
    }
    if(dp[0][0]==dp[0][1]){
        no;
        return;
    }
    if(dp[0][0] == dp[n-1][0] and dp[n-1][0] == dp[0][n-1] and dp[0][n-1] == dp[n-1][n-1]){
        bool ok=true;
        char base=dp[0][0];

            for(ll i=0;i<n;i++){
                for(ll j=0;j<n;j++){
                    if(i==j){
                        if(base!=dp[i][j]){
                            ok=false;
                            break;
                        }
                    }else if(j==(n-i-1)){
                        if(base!=dp[i][j]){
                            ok=false;
                            break;
                        }
                    }else{
                        if(base==dp[i][j]){
                            ok=false;
                            break;
                        }
                    }
                }
                

            } 
        if(ok)yes;
        else no;


    }else{
        no;
        return;
    }


    
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}