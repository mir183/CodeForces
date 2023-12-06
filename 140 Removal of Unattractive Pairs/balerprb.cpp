#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        vector<int> v(26);
        for(auto i : s)
        {
            v[i-'a']++;
        }
        int mx = *max_element(v.begin(), v.end());
        cout<<max(n%2,max(0, 2*mx-n))<<endl;
    }
    
    return 0;
}