//WAP to enter a number and print its perfect no. or not

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, i, sum = 0;
    printf("Enter a Number");
    scanf("%d", &a);
    for(i = 1; i < a; i++) {
        if(a % i == 0) {
            sum = sum + i;
        }
    }
    if(sum == a) {
        printf("Perfect Number");
    }
    else {
        printf("Not a Perfect Number");
    }
    return 0;
}
