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
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        ll mincandy=INFINITY;
        ll minorage=INFINITY;
        ll candy[n];
        ll orange[n];
        ll ans=0;
        for(int i=0;i<n;i++){
            cin>>candy[i];
            mincandy=min(candy[i], mincandy);
            }
        for(int i=0;i<n;i++){
            cin>>orange[i];
            minorage=min(minorage, orange[i]);
            }
        for(int i=0;i<n;i++){// int mincandy=INFINITY;
        // int minorage=INFINITY;
        ans=ans+(max(candy[i]-mincandy, orange[i]-minorage));
        }
        cout<<ans<<endl;
    
}
}