#include<stdio.h>
int main(){
    char firstname[30], lastname[30];
    char section;
    printf("enter First Name and Last Name: ");
    scanf("%s %s", firstname, lastname);
    printf("enter section (A/B/C): ");
    scanf(" %c", &section);
    printf("student: %s %s | Section: %c\n", firstname, lastname, section);
    return 0;
    
}