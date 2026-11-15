#include<stdio.h>
int cal(int q,int m,int f){
    return q+m+f;
}
double calper(int tm,int mm){
    return ((double)tm/mm)*100.0;
}
char assigngrade(double percentage){
    if(percentage >=80.0) return 'A';
    if(percentage >=65.0) return 'B';
    if(percentage >=50.0) return 'C';
    return 'F';
}
int main(){
    int q,m,f;
    scanf("%d%d%d",&q,&m,&f);
    int total = cal(q,m,f);
    double pct= calper(total,100);
    char grade = assigngrade(pct);
    printf("Total: %d/100 | percentage: %.2lf | Grade: %c\n",total,pct,grade);
    return 0;
}