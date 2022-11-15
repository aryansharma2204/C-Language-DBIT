#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i;
    printf("Enter a Number: ");
    scanf("%d", &num);

    for(i = 1; i <=num; i++) {
        if(num%i == 0) {
            printf("factors are: %d\n", i);
        }
    }
    return 0;
}
