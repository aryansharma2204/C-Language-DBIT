//Sum of two numbers using functions in c

#include <stdio.h>

void sum();
int main(int argc, char const *argv[])
{
    sum();
    return 0;
}
void sum() {
    int a, b, c = 0;
    printf("Enter a Value: \n");
    scanf("%d", &a);

    printf("Enter a Value: \n");
    scanf("%d", &b);

    c = a + b;
    printf("%d", c);
}

