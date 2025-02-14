#include<bits/stdc++.h> //Uncomment while submitting
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
ll MX=1e6+5;

void solve() {
    // Your code here
    ll n;
    cin>>n;
    deque<ll>day(MX,-1);
    ll day_index=0;
    deque<bool>present(MX,false);
    ll manush=0;
    deque<ll>events;
    ll last=-1;


    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x>0){
            if(present[x] or day[x]==day_index){
                cout<<-1<<endl;
                return;
            }
            present[x]=true;
            manush++;
            day[x]=day_index;
        }else{
            x=-x;
            if(!present[x] or day[x]!=day_index){
                cout<<-1<<endl;
                return;
            }
            present[x]=false;
            manush--;
            if(manush==0){
                events.push_back(i-last);
                last=i;
                day_index++;
            }
        }
    }
    if(manush!=0){
        cout<<-1<<endl;
        return;
    }
    if(last<n-1){
        events.push_back(n-1-last);
    }
    cout<<events.size()<<endl;
    for(auto x:events){
        cout<<x<<" ";
    }cout<<endl;
    


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