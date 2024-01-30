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
    int n,m;
    cin>>n>>m;
    map<string,string>mp;

    for(ll i=0;i<m;i++){
        string a,b;
        cin>>a>>b;
        if(a.size()<=b.size()){
            mp[a]=a;
        }else{
            mp[a]=b;
        }
    }
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        cout<<mp[s]<<" ";
    }
    cout<<endl;


    return 0;
}