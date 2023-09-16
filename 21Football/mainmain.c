#include<stdio.h>
#include<stdlib.h>
int main(){
    char c[100];
    int flag=0;
    gets(c);
    int zerocount=0;
    int onecount=0;
    for(int i=0;i<100;i++){
        if(c[i]=='0'){
            onecount=0;
            zerocount++;
            if(zerocount==7){
                break;
            }
        }
        else if(c[i]=='1'){
            zerocount=0;
            onecount++;
            if(onecount==7){
                break;
            }

        }
    }
    if(zerocount==7 || onecount== 7){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
//this worked in CF