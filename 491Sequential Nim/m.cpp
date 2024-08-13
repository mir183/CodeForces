#include <iostream>
#include<deque>
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
	deque<ll>v(n);
	ll cnt1=0;
	for(ll i=0;i<n;i++){
		cin>>v[i];
	}
	for(ll i=0;i<n;i++){
		if(v[i]==1)cnt1++;
		else break;
	}
	if(cnt1==n)cnt1--;
	if(cnt1%2==0){
		cout<<"First"<<endl;
	}else{
		cout<<"Second"<<endl;
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