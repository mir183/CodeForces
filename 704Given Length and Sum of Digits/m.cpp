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
    ll m,s;
    cin>>m>>s;

    if(s==0){
        if (m==1)cout<<0<<" "<<0<<endl;
        else cout<<-1<<" "<<-1<<endl;
        return;
    }
    string mn,mx;
    for(ll i=0;i<m;i++){
        ll k=min(9LL,s);
        mx.push_back('0'+k);
        s-=k;
    }
    if(s>0){
        cout<<-1<<" "<<-1<<endl;
        return;
    }
    mn=mx;
    reverse(mn.begin(),mn.end());
    if(mn[0]=='0'){
        for(ll i=1;i<m;i++){
            if(mn[i]>'0'){
                mn[i]--;
                mn[0]='1';
                break;
            }
        }
    }
    cout<<mn<<" "<<mx<<endl;


}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}