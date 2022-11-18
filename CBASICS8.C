//Program to print factor of two numbers

#include <stdio.h>

int main(int argc, char const *argv[]){
    int a, b, i;
    printf("Enter the First Number\n");
    scanf("%d", &a);
    printf("Enter the Second Number\n");
    scanf("%d", &b);

    for(i = 1; i < a; i++) {
        if((a % i == 0) && (b % i == 0)) {
            printf("Factor is %d\n", i);
        }
    }
    return 0;
}
