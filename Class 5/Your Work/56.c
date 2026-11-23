#include<stdio.h>
int main(){
    char fullname[50];
    char alphaonly[50];
    printf("Enter Full Name: ");
    scanf(" %[^\n]", fullname);
    printf("Enter city name (stops at digits): ");
    scanf(" %[A-Za-Z ]", alphaonly);
    printf("Full Name : %s\n", fullname);
    printf("City Name : %s\n", alphaonly);
    return 0;
}