#include<stdio.h>
int main(){
    int i,n;
    char arr[100];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        gets(arr);
        int len=strlen(arr);
        if (len>10){
            printf("%c%d%c\n", arr[0],len-2,arr[len-1]);
        }
        else{
            printf("%s\n",arr);
        }

    }
}