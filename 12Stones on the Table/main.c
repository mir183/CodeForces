#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d\n", &n);
    char c[n];
    gets(c);
    int count=0;
    for(int i=0;i<n;i++){
        
        if(c[i]==c[i+1]){
            count++;
        }
        else if (c[i]!=c[i+1]){
            count=count;
        }
    }
    printf("%d", count);
    
    }
