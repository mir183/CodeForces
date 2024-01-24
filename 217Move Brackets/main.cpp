#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll  n;
// ll stack[1000];


void solve() {
    // Your code here
    cin>>n;
    string s;
    cin>>s;
    ll original=n;
    ll pr=0;
    for(ll i=0;i<n;i++){
        if (s[i] == '(' && s[i + 1] == ')') {
                //erase s[i] and s[i+1]
                s.erase(i, 2);
                i=0;
                // cout<<s<<endl;
                pr++;
                n-=2;
                // continue;
            }
            
    }
    // cout<<s<<endl;
    pr=pr*2;
    ll ans=original-pr;
    // if(ans>0){
        // cout<<ans/2<<endl;
    // }else{
        
    // }

    if(n==2 and s[0]=='(' and s[1]==')'){
        cout<<0<<endl;
    }
    else{
        cout<<ans/2<<endl;
    }    


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