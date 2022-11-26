//WAP to enter a number and print its factorial

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    long int f = 1;
    printf("Enter a Number: \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        f = f * i;
    }
    printf("%ld", f);
    return 0;
}
