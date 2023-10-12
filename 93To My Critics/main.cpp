#include<bits/stdc++.h>
using namespace std;


#define     ll              long long int
#define     ld              long double
#define     endl            '\n'
#define     fasterio        ios_base::sync_with_stdio(false); cin.tie(NULL);
#define     yes             cout<<"YES"<<"\n"
#define     no              cout<<"NO"<<"\n"


int main()
{
    fasterio;
    int t;
    cin>>t;
    while (t--)
    {
        int arr[3];
        for(int i=0;i<3;i++)cin>>arr[i];
        sort(arr, arr + 3, greater<int>());
        int sum=0;
        for(int i=0;i<2;i++){
            sum+=arr[i];
        }
        if(sum>=10)yes;
        else no;

    }
    

    return 0;
}