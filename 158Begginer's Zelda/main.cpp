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
        vector<int> arr(n);
        for(int i=0;i<n-1;i++){
            int u,v;
            cin >> u >> v;
            arr[u-1]++;
            arr[v-1]++;
        }
        int ans=count(arr.begin(),arr.end(),1);
        cout<<(ans+1)/2<<endl;
    }

    return 0;
}
