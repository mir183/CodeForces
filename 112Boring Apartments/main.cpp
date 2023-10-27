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
        string s;
        cin>>s;
        int n=s[0]-'0'-1;
        int lenth=s.size();
        cout<<n*10+lenth*(lenth+1)/2<<endl;
    }
    
    return 0;
}