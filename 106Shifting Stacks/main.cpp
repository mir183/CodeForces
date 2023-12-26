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
        int n;
        int flag=0;
        cin>>n;
        vector<int>arr(n);
        int sum=0,need=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        vector<int>v(n);
        v=arr;
        vector<int>vr(n);
        
        sort(v.begin(),v.end());
        reverse_copy(v.begin(), v.end(), vr.begin());
        if(v==arr||vr==arr){
            for(int i=0;i<n;i++){
                if(arr[i]>=i) flag=1;
                else flag=0;
            }
        }
        if(flag==1)yes;
        else no;
        


        
    }
    
    return 0;
}