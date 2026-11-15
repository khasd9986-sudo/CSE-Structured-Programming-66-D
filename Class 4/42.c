#include<stdio.h>

void  printExamheader();

int main(){
    printExamheader();
    printf("Candidate name: Rahim Ahmed\n");
    printf("Seat Number : CS-204\n");
    printExamheader();
    return 0;
}
void printExamheader() {
    printf("====================================\n");
    printf("   CSE-101 MIDTERM EXAM ADMIT SLIP  \n");
    printf("====================================\n");
}