//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll odd=1,even=2,on=0,en=0,ans1=0,ans2=0;
    for(int i=1;i<=n;i++){
        ll x;cin>>x;
        if(x%2){
            ans1+=abs(odd-i);
            ans2+=abs(even-i);
            on++;
            odd+=2;
            even+=2;
        }
        else en++;
    }
    //
    if(on==en+1){
        cout<<ans1<<endl;
    }else if(on+1==en){
        cout<<ans2<<endl;
    }else if(on==en){
        cout<<min(ans1,ans2)<<endl;
    }else{
        cout<<-1<<endl;
    }

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