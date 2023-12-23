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
        int sum=0;

        vector<int> l(n);
        for(int i = 0; i < n; i++) cin >> l[i];
        sort(l.begin(), l.end(), greater<int>());

        vector<int> r(n);
        for(int i = 0; i < n; i++) cin >> r[i];
        sort(r.begin(), r.end(), greater<int>());

        vector<int> c(n);
        for(int i = 0; i < n; i++) cin >> c[i];
        // sort(c.begin(), c.end(), greater<int>());
        sort(c.begin(), c.end());


        vector<int> xyz(n);
        for(int i=0;i<n;i++){
            int innerans=c[i]*(r[i]-l[i]);
            sum+=innerans;
            xyz[i]=innerans;
        }
        cout << sum << endl;
        
        sort(xyz.begin(), xyz.end(), greater<int>());

        // cout << "l: ";
        // for(int i=0;i<n;i++){
        //     cout << l[i] << " ";
        // }
        // cout << endl;
        // cout << "r: ";
        // for(int i=0;i<n;i++){
        //     cout << r[i] << " ";
        // }
        // cout << endl;
        // cout << "c: ";
        // for(int i=0;i<n;i++){
        //     cout << c[i] << " ";
        // }
        // cout << endl;

        // cout << "xyz: ";
        // for(int i=0;i<n;i++){
        //     cout << xyz[i] << " ";
        // }
        // cout << endl;


    }

    
    return 0;
}