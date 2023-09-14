#include <stdio.h>
#include <math.h>
int main(){
    int i,j;
    int xaxs, yaxs;
    int arr[5][5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int row, colum;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==1){
                row=i;
                colum=j;
                    break;
            }
        }
    }
    xaxs=abs(row-2);
   yaxs=abs(colum-2);
printf("%d", abs(xaxs+yaxs));

}
