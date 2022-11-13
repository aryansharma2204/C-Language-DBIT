//Prefix
#include<stdio.h>
int main() {
    int x, y;
    printf("Prefix Example:\n");
    printf("Enter a Number");
    scanf("%d", &x);
    y = ++x + ++x + ++x;
    printf("\n y = %d", y);
    printf("\n x = %d", x);
    return(0);
}
/*
1) Count the number of postfix and keep it safe
2) Increase the value of the variable according to the count saved
3) Apply the increased value to the variable
*/