#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    while (n>0)
    {
        if(n>=100){
            count=count+(n/100);
            n=n%100;
        }
        else if(n>=20){
            
            count=count+(n/20);
            n=n%20;
        }
        else if(n>=10){
            
            count=count+(n/10);
            n=n%10;
        }
        else if(n>=5){
            
            count=count+(n/5);
            n=n%5;
        }
        else if(n>=1){
            
            count=count+(n/1);
            n=n%1;
        }
    }
        

            cout<<count<<endl;
}