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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int min = *min_element(v.begin(), v.end());
        int max = *max_element(v.begin(), v.end());
        int total= accumulate(v.begin(), v.end(), 0);
        int minimumcan=min*n;
        int ans=total-minimumcan;
        cout<<ans<<endl;

    }
    
    return 0;
}