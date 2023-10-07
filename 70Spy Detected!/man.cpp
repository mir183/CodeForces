#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int i=0;
        if(arr[0]!=arr[1] && arr[1]==arr[2]){
                cout<<0+1<<endl;
                //break;
        }else{
            int x=arr[0];
            for(int i=1;i<n;i++){
                if(arr[i]!=x){
                    cout<<i+1<<endl;
                    break;
                }
            }
            }
            t--;
        }

    }
    