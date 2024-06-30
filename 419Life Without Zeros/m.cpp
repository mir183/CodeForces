#include <iostream>
#include<string>
#include<algorithm>
#include<math.h>

using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    string a,b;
    cin>>a>>b;
    ll n=a.size();
    ll m=b.size();
    string tmpa,tmpb;
    for(ll i=0;i<n;i++){
        if(a[i]=='0')continue;
        else{
            tmpa.push_back(a[i]);
        }
    }
    for(ll i=0;i<m;i++){
        if(b[i]=='0')continue;
        else{
            tmpb.push_back(b[i]);
        }
    }

    ll orga=stoll(a);
    ll orgb=stoll(b);
    ll orgsum=orga+orgb;
    string mainsum=to_string(orgsum);
    string arehbhai;
    for(ll i=0;i<mainsum.size();i++){
        if(mainsum[i]=='0')continue;
        else{
            arehbhai.push_back(mainsum[i]);
        }
    }
    ll za=stoll(tmpa);
    ll zb=stoll(tmpb);
    ll zsum=za+zb;

    ll finalbhai=stoll(arehbhai);
    
    if(zsum==finalbhai){
        yes;
    }else no;
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