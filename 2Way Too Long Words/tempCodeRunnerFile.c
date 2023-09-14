#include<stdio.h>
int main(){
    int i,n;
    char arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        gets(arr);
        int len=strlen(arr);
        if (len>10){
            printf("%c%d%c", arr[0],len,arr[len-1]);
        }
        else{
            printf("%s\n",arr);
        }

    }
}