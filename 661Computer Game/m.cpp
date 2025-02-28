// #include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include<cmath>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

void solve() {
    // Your code here
    ll k,n,a,b;
    cin>>k>>n>>a>>b;
    k-=n*a;
    if(k>0)cout<<n<<endl;
    else{
        k=-k;
        k++;
        ll dif=a-b;
        // ll turn=ceil(dif,k);
        ll turn = (dif + k - 1) / dif;
        if(turn>n){
            cout<<-1<<endl;
        }else{
            cout<<n-turn<<endl;
        }
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