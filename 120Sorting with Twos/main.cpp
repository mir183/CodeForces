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
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        int m;
        if(n>=1){
            m=0;
        }
        if(n>=2){
            m=1;
        }
        if(n>=4){
            m=2;
        }
        if(n>=8){
            m=3;
        }
        if(n>=16){
            m=4;
        }

        for(int i=0;i<pow(2,m);i++){
            arr[i]=arr[i]-1;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}