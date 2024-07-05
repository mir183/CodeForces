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
    deque<ll>v(n+n);
    for(ll i=0;i<n+n;i++){
        cin>>v[i];
    }
    // if(n%2){
    //     cout<<0<<endl;
    //     return;
    // }
    sort(v.begin(),v.end());
    // deque<ll>even;
    // deque<ll>odd;
    // for(ll i=0;i<n+n;i++){
    //     if(i%2==0){
    //         even.push_back(v[i]);
    //     }else{
    //         odd.push_back(v[i]);
    //     }
    // }
    // sort(even.begin(),even.end());
    // sort(odd.begin(),odd.end());
    // // Correct median calculation
    ll e = 0, o = 0;
    // if (n % 2 == 0) {
    //     // For even n, calculate the average of the two middle elements
    //     e = (even[n / 2 - 1] + even[n / 2]) / 2;
    //     o = (odd[n / 2 - 1] + odd[n / 2]) / 2;
    // } else {
    //     // For odd n, use the middle element
    //     e = even[n / 2];
    //     o = odd[n / 2];
    // }
    n=2*n;

    e=v[n/2-1];
    o=v[n/2];
    // // cout<<"ANS: ";
    cout<<abs(e-o)<<endl;
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