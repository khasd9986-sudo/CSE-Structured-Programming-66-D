#include<stdio.h>
double calbill(int units, double rateperunit, char ctype){
    double baseamount= units*rateperunit;
    if(ctype=='C' || ctype=='c'){
        return baseamount+(baseamount*0.15);
    }
    return baseamount;
}
int main(){
    int usedunit;
    double rate;
    char type;
    scanf("%d %lf %c",&usedunit,&rate,&type);
    double payable=calbill(usedunit,rate,type);
    printf("Total payable bill= %.2lf BDT\n",payable);
    return 0;
}