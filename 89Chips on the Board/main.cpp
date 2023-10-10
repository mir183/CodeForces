#include<bits/stdc++.h>
#define ll long long int 
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr1[n], arr2[n];

        for(int i=0;i<n;i++)cin>>arr1[i];
        for(int i=0;i<n;i++)cin>>arr2[i];

        

        int mina = *min_element(arr1, arr1 + n);
        int minb = *min_element(arr2, arr2 + n);

        
        ll sum1=0;
        for(int i=0;i<n;i++){
            sum1=sum1+arr1[i];
        }

        
        ll sum2=0;
        for(int i=0;i<n;i++){
            sum2=sum2+arr2[i];
        }

        ll ans = min(mina * n + sum2, minb * n + sum1);




        cout<<ans<<endl;
        
    }
    
}