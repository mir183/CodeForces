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
    cin >>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int asif=0;
        int maisha=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(auto i:arr){
            if(arr[i]%2==0){
                asif+=arr[i];
            }
            else{
                maisha+=arr[i];
            }
        }
        if(asif>maisha){
            yes;
        }else{
            no;
        }
    }
    
    return 0;
}