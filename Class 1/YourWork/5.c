#include<stdio.h>
int main(){
int a,b;
scanf("%d %d", &a,&b);
int sum=a+b;
if(sum%2==0){
    printf("sum is even \n");
}
else{
    printf("sum is odd\n");
}

int sub=a-b;
if(sub==0){
    printf("sub is ZERO\n");
}
else if(sub>0){
    printf("sub is POSITIVE");
}
else{
    printf("sub is NEGATIVE \n");
}

if(a==b){
    printf("First is equal to second\n");
}
else if(a>b){
    printf("First is greater then second \n");
}
else{
    printf("First is less then second \n");
}
return 0;
}