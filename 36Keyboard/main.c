#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char line1={'q','w','e','r','t','y','u','i','o','p','\0'};
    char line2={'a','s','d','f','g','h','j','k','l',';','\0'};
    char line3={'z','x','c','v','b','n','m',',','.'/',','\0'};
    char str[1000];
    char c;
    scanf("%c", &c);
    gets(str);
    int n=strlen(str);
if(c=='R'){
        for(int i=0;i<n;i++){
            for(int j=0;j<10;j+){
                if(str[i]==line1[j]){
                    str[i]=line1[j-1];
                }
                else if(str[i]==line2[j]){
                    str[i]=line2[j-1];
                }
                if(str[i]==line3[j]){
                    str[i]=line3[j-1];
                }

            }
        }
    }
    if(c=='L'){
        for(int i=0;i<n;i++){
            for(int j=9;j>0;j--){
                if(str[i]==line1[j]){
                    str[i]=line1[j+1];
                }
                else if(str[i]==line2[j]){
                    str[i]=line2[j+1];
                }
                if(str[i]==line3[j]){
                    str[i]=line3[j+1];
                }

            }
        }
    }

printf("%s", str);
}