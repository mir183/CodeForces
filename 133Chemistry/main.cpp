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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        int count=0;
        for(auto i:m){
            if(i.second%2!=0){
                count++;
            }
        }
        if(k>=n)no;
        else if(k>=count-1){
            yes;
        }else{
            no;
        }
        
    }
    
    return 0;
}