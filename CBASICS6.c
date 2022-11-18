//WAP to print sum and avg of all even numbers between 1 to n.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, c = 0, n, sum = 0; 
    float avg;
    printf("Enter the Number:\n");
    scanf("%d", &n);
    
    for(i = 1; i < n; i++) {
        if(i%2 == 0) {
            sum = sum + i;
            c = c + 1;
            printf("no. of even numbers: %d\n", c);
        }
    }
    avg = sum / c;
    printf("Sum is %d\n", sum);
    printf("avg is %f\n", avg);
    return 0;
}
