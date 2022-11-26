/*
Syntax:
initilization
do {
    statement(s);
    update exp
}
while(test exp);
return 0;
}
*/

//WAP to keep entering integers and keep checking whether those integers are even or odd until users choice.
#include<stdio.h>
int main(int argc, char const *argv[])
{   
    int a;
    char choice;
    do {
        printf("Enter an Integer:\n");
        scanf("%d", &a);
        if(a%2==0) {
            printf("is even\n");
        }
        else {
            printf("is odd");
        }
        printf("\nPress y to continue the loop: ");
        scanf(" %c", &choice); //Note the Space, This will clear out all white space characters from stdin before reading data.
    }
    while(choice == 'y');
    return 0;
}
