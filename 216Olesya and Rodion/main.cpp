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
    ll a;
    string b;
    cin>>a>>b;
    if(a==1 and b=="10"){
        cout<<-1<<endl;
    }else{
        if(b=="10")a--;
        string ans=b;
        a--;
        while(a--){
            b+='0';
        }
        cout<<b<<endl;
    }
    return 0;
}