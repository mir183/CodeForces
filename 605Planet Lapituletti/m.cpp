//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

deque<ll>a={0, 1, 5, -1, -1, 2, -1, -1, 8, -1};
ll h,m;
bool chk(ll hh,ll mm){
    if(a[hh/10]==-1 or a[hh%10]==-1 or a[mm/10]==-1 or a[mm%10]==-1){
        return false;
    }
    ll ih=a[mm%10]*10+a[mm/10];
    ll im=a[hh%10]*10+a[hh/10];
    return ih<h and im<m;
}


void solve() {
    // Your code here
    cin>>h>>m;
    ll hh,mm;
    char colon;
    cin>>hh>>colon>>mm;
    while (true)
    {
        if(chk(hh,mm)){
            printf("%02ld:%02ld\n", hh, mm);
            break;
        }
        
        mm=(mm+1)%m;
        if(mm==0){
            hh=(hh+1)%h;
        }
    }

    // printf("%02ld:%02ld\n", hh, mm);
    
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