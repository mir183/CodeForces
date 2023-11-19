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
        ll n;
        cin>>n;
        ll ans=0;
        ll ar[n+3];
        for(int i=0;i<n;i++)cin>>ar[i];
        for(int i=0;i<n-1;i++)
        {
            ans=max(ans,ar[i]*ar[i+1]);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}