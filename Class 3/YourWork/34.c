#include<stdio.h>
int main(){
    int row,coll,a[10][10],b[10][10],c[10][10];
    scanf("%d%d",&row,&coll);

    for(int i=0;i<row;i++){
        for(int j=0;j<coll;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<coll;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<coll;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d",c[i][j]);
        }
    }
return 0;
}