//WAP to enter a character and print its next character.
#include<stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("\n");
    if(ch>=65 && ch<90)
        printf("%c", ch+1);
    else if(ch>=97 && ch<122)
        printf("%c", ch+1);
    else if(ch==90)
        printf("%c", 65);
    else if(ch==122)
        printf("%c", 122);
    else
        printf("%c", ch);
    return 0;
}