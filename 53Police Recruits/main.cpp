#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sort(begin(arr), end(arr));
    /*int one = count(begin(arr), end(arr), 1);
    int mOne = count(begin(arr), end(arr), -1);*/
    int crime=0;
    int police=0;
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            if(police==0){
                crime++;
            }
            else{
                police--;
                
            }
        }
        else{
            police=police+arr[i];
        }

    }
    
    cout<<crime;



}