#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll x,y,z;
    cin>>x>>y>>z;
    x++;
    z--;
    while (x!=y)
    {
        if(x%y==0){
            while (x%y==0)
            {
                x/=y;
            }
            

        }

        if(z==0){
            cout<<x<<endl;
            return;
        }
        ll tmp=y-x%y;
        if(tmp<=z){
            x+=tmp;
            z-=tmp;
        }else{
            cout<<x+z<<endl;
            return;
        }
    }
    cout<<1+z%(y-1)<<endl;
    
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