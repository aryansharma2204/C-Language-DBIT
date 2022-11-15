// WAP to print sum and avg of all even numbers between 1 to 500.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, sum = 0;
    float avg;
    for(i = 100; i < 500; i++) {
        if(i%2 == 0) {
            sum = sum + i;
        }    
    }
    avg = sum/200;
    printf("Sum is %d", sum);
    printf("avg is %f", avg);
    return 0;
}
