// Program to print HCF and LCM of two numbers

#include <stdio.h>
int main() {
    int a, b, i, aryan, lcm;
    printf("Enter the First Number\n");
    scanf("%d", &a);
    printf("Enter the Second Number\n");
    scanf("%d", &b);

    for(i = 1; i < a; i++) {
        if((a % i == 0) && (b % i == 0)) {
            aryan = i;
        }
    }
    printf("HCF is %d\n", aryan);
    lcm = (a * b)/aryan;
    printf("LCM is %d\n", lcm);
    
    return 0;
}