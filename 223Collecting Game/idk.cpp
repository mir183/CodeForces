#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll i;
		vector<ll>a(n),b(n);
		vector<ll>sm(n);
		map<ll,ll>mp;
		for(i=0;i<n;++i){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b.begin(),b.end());
		sm[0]=b[0];
		for(i=1;i<n;i++) sm[i]=sm[i-1]+b[i];
		mp[b[n-1]]=n-1;
		for(i=n-2;i>=0;i--){
			if(sm[i]>=b[i+1]) mp[b[i]]=mp[b[i+1]];
			else mp[b[i]]=i;
		}
		for(i=0;i<n;i++) cout<<mp[a[i]]<<" ";
		cout<<endl;
    }
    
    return 0;
}