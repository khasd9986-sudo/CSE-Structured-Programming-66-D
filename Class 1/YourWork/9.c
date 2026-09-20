#include<stdio.h>
int main(){
char ch;
scanf("%c", &ch);
if(ch>='A' && ch<='Z'){
    printf("%c is upercase \n", ch);
}
else if(ch>='a' && ch<='z'){
    printf("%c is lowercase \n", ch);
}
else if(ch>='0' && ch<='9'){
    printf("%c is a digit \n", ch);
}
else{
    printf("%c is a Special Character\n", ch);
}
    return 0;
}
