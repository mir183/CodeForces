#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int something =(n-y)/x;
        cout<<something*x+y<<endl;
    }
    
}