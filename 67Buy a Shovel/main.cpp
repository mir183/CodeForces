#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int sum=0;
    int i=0;
    while (1)
    {
        sum=sum+n;
        i++;
        if((sum%10==0)||(sum%10==k)){
            break;
        }
        else
        {
            continue;
        }
        
    }

    cout<<i<<endl;
    


}