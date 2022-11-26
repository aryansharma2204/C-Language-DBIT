#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = -1, b = 1, c = 0, n, i;
    printf("Enter the Limit\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        c = a + b;
        printf("\t %d", c);
        a = b;
        b = c;
    }
    return 0;
}

