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
    
    while(t--){
        int n;
        cin >> n;
        string s;
        // getline(cin,s);
        cin>>s;
        sort(s.begin(),s.end());
        cout<<s.back()-'a'+1<<endl;
        
    }

    return 0;
}
