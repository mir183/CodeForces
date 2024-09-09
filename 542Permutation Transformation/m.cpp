#include <iostream>
#include<deque>
#include<climits>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

deque<ll>v;
deque<ll>ans;

void sf(int i,int j,int d){
    if(i>j) return;
    ll index;
    ll max=INT_MIN;
    for(int k=i;k<=j;k++){
        if(v[k]>max){
            max=v[k];
            index=k;
        }
    }
    ans[index]=d;
    sf(i,index-1,d+1);
    sf(index+1,j,d+1);

}

void solve() {
    // Your code here
    ll n;
    cin>>n;
    v.resize(n);
    ans.resize(n);
    for(auto &i:v) cin>>i;
    sf(0,n-1,0);
    for(auto &i:ans) cout<<i<<" ";
    cout<<endl;
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