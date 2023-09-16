#include<stdio.h>
#include<stdlib.h>
int main(){
    char c[100];
    int flag=0;
    gets(c);
    for(int i=0;i<100;i++){
        if(c[i]==c[i+1]){
            if(c[i+1]==c[i+2]){
                if(c[i+3]==c[i+4]){
                    if(c[i+4]==c[i+5]){
                        if(c[i+5]==c[i+6]){
                            flag=1;
                            break;
                        }
                    }
                }
            }
        }
        else{
            flag=0;
        }
    }
    if(flag>0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
//this code didnt worked in CF