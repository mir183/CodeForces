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
    int n,q;
    cin >>n>>q;
    vector<int>v(n);
    for (int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    vector<ll>prefix(n+1,0);
    for (int i=0;i<n;i++) {
        prefix[i+1]=prefix[i]+v[i];
    }
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<prefix[n-x+y]-prefix[n-x]<<endl;
    }

    return 0;
}
