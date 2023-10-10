/*#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin>>n;
    if(n<10)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        int a=4;
        int b=5;
        int c=n-a-b;
        if(c%3==0){
            c=c-2;
            b=b+2;
            while(1)
            {if(a==b){
                a++;
                b--;

            }
            if(b==c){
                b++;
                c--;
            }
            if(a==c){
                a++;
                c--;
            }
            if(a!=b!=c){
                break;
            }



        }}
        cout<<a<<" "<<b<<" "<<c<<endl;
        /*cout<<"YES"<<endl;
        int a = (n+1)/2;
        if(a%3==0){
            a=a+2;
        }
        int b=n-a-1;
        cout<<"1 "<<a<<" "<<b<<endl;*/
    //}

//}
//}
//*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        if(n<=6||n==9){
            cout<<"NO"<<endl;
        }
        else if(n%3){
            cout<<"YES"<<endl;
            cout<<"1 2 "<<n-3<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<"1 4 "<<n-5<<endl;
        }
    }
    

}
