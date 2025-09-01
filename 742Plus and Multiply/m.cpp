//#include<bits/stdc++.h> //Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "Yes" << endl
#define no cout << "No" << endl;

void solve() {
	// Your code here
	ll n,a,b;
	cin>>n>>a>>b;
	ll x=1;
	while(x<=n){
		if((n-x)%b==0){
			yes;
			return;
		}
		if(a==1)break;
		x*=a;
	}
	no;
}

signed main() {
	MIR183_Mac;
	// Always use ll, int may give TLE
	ll tt;
	tt=1;
	cin >> tt;
	while (tt--) {
		solve();
	}
	return 0;
}