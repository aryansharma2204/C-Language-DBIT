// WAP to enter 10 numbers and print the greatest one

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, a, max = 0;
    for(i = 1; i <= 10; i++) {
        printf("\nEnter a Number");
        scanf("%d", &a);
        if(a > max) {
            max = a;
        }
    }
    printf("\nGreatest Number is = %d", max);
    return 0;
}
