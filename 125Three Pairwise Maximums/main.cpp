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
            
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(arr[1]==arr[2]){
        cout<<"YES"<<endl;
        cout<<arr[2]<<" "<<arr[0]<<" "<<arr[0]<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    }
    
    return 0;
}