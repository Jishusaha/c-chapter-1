#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
    printf("The entered character is upper case character. The lower case character is:%c",(ch+32));
    else
    printf("The entered character is lower case character. The upper case character is:%c",(ch-32));
    return 0;
}