#include <stdio.h>
#include <stdlib.h>
int main(){
    int x;
    scanf("%d", &x);
    int steps=0;
    while(x>0){
        if(x%5==0){
            steps++;
            x=x-5;
        }
        else if(x%4==0){
            steps++;
            x=x-4;
        }
        else if(x%3==0){
            steps++;
            x=x-3;
        }
        else if(x%2==0){
            steps++;
            x=x-2;
        }
        else if(x%1==0){
            steps++;
            x=x-1;
        }
    }
printf("%d", steps);
}
