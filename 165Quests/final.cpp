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
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) 
        {
            cin >> b[i];
        }
        vector<int> d(n);
        d[0]=b[0];
        for(int i=1;i<n;i++)
        {
            d[i]=max(d[i-1],b[i]);
        }
        int ans=0,total=0;
        for(int i=0;i<min(n,k);i++)
        {
            total+=a[i];
            int r=k-(i+1);
            int p=total+r*d[i];
            ans=max(ans,p);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}