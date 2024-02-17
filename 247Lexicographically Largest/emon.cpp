#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

bool cmp(ll a,ll b){
    return a>b;
}
void solve()
{
    ll n; cin>>n;
    vector<ll>a(n);
    set<ll>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i] += i+1;
        //s.insert(a[i]);
    }
    sort(a.begin(),a.end(),cmp);
    ll num;
    for(auto e:a)
    {
        auto it=s.find(e);
        if(it==s.end())
        {
            cout<<e<<" ";
            s.insert(e);
        }
        else
        {
            num = *s.begin();
            cout<<num-1<<" ";
            s.insert(num-1);
        }
    }
    cout<<endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}