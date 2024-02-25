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
    string a,b;
    cin>>a>>b;
    // sort(a.begin(),a.end());
    // sort(b.begin(),b.end());
    if(a==b){
        cout<<-1<<endl;
    }else{
        ll x=max(a.size(),b.size());
        cout<<x<<endl;
    }
    return 0;
}