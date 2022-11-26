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
    char y;
    do {
        printf("Enter an Integer:\n");
        scanf("%d", &a);
        if(a%2==0) {
            printf(a, "%d is even");
        }
        else {
            printf(a, "%d is odd");
        }
        printf("Do you want to continue?");
        scanf("%d", a);
    }
    while(char); {

    }
    return 0;
}
