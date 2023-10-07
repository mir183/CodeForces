#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
        int arr[6];
        vector<int>mainarr;
    
    int total=0;
    int m=1;
    for(int i=1;i<6;i++){
        arr[i]=n%10;
        n/=10;
        if(arr[i]!=0){
            total++;
        }
    }
    cout<<total<<endl;

    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    int ano[sizeOfArray];

    for(int i=1;i<=6;i++){
        if(arr[i]!=0){
            ano[sizeOfArray-i]=arr[i]*m;
        }
        else{
            ano[sizeOfArray-i]=0;
        }
        m*=10;
    }
    for(int i=0;i<sizeOfArray;i++){
        if(ano[i]!=0){
            cout<<ano[i]<<" ";
        }
        
    }
    /*reverse(mainarr.begin(), mainarr.end());
    for(int i=0;i<mainarr.size();i++){
        cout<<mainarr[i]<<" ";
    }*/

    cout<<endl;
        t--;

    }
    
    
}
