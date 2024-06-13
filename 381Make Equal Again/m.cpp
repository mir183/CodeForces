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
    ll n;
    cin>>n;
    deque<ll>d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }


    ll i=0,j=n-1;
    while(i<n-1 and d[i]==d[i+1])
    {
        i++;
    }
    while(j>0 and d[j]==d[j-1])
    {
        j--;
    }
    // cout<<"ans: ";
    if(i==n-1 or j==0){
        cout<<0<<endl;
        return;
    }
    if(i<j and d[i]==d[j]){
        cout<<j-i-1<<endl;
    }else{
        cout<<min(n-i-1,j)<<endl;
    }
    
    
    
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