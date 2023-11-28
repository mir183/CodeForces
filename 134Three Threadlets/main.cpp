#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    int t;
    cin>>t;
    while (t--)
    {
        ll arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
            }
        sort(arr,arr+3);


        if(arr[0]==arr[1] && arr[1]==arr[2]){
            yes;
        }
        else {
            while (arr[0]!=arr[3])
            {
                arr[1]-=1;
                arr[2]-=1;
            }
            if(arr[0]==arr[1] && arr[1]==arr[2]){
            yes;
                }
                else no;
            

            
            

        }
    }
    
    return 0;
}