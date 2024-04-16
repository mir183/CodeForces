#include <iostream>
#include <deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

signed main() {
    MIR183_Mac;
    // Your code here
    // Always use ll, int may give TLE
    ll  n;
    cin>>n;
    deque<ll> d(7);
    for(ll i=0;i<7;i++) cin>>d[i];
    ll i=0;
    while(n>0){
        n-=d[i];
        if(n<=0) break;
        i++;
        i%=7;
    }
    cout<<i+1<<endl;
    return 0;
}