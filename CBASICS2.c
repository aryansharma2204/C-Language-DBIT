//Postfix
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter a Number");
    scanf("%d", &a);
    b = a++ + a++ + a++;
    printf("\n a = %d", a);
    printf("\n b = %d", b);
    return(0);
}
/*
1) Count the number of postfix and keep it safe
2) Apply the value to the variable
3) Increase the value of the variable according to the count saved
*/