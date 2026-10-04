#include<stdio.h>
int main(){
    int n, arr[100];
    int ecount = 0, ocount = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2 ==0){
            ecount++;

        }
        else{
            ocount++;
        }
    }
    printf("even count=%d, oddcount=%d\n",ecount,ocount);
    return 0;
}
