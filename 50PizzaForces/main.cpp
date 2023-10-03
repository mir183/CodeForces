#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0){
        long long int n;
        cin>>n;
        if(n<=6) cout<<"15"<<endl;
        else if(n>=7 && n<=8) cout<<"20"<<endl;
        else if(n>=9 && n<=10) cout<<"25"<<endl;
        else{
            if (n%2!=0){
                n=n+1;
                long long int ans;
                ans = n*2.5;
                cout<<ans<<endl;
            }
            else if (n%2==0)
            {
                long long int ans;
                ans = n*2.5;
                cout<<ans<<endl;
            }
            
        }
        t=t-1;
    }
}