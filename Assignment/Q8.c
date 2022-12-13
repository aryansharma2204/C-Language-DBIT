/*
WAP to print the following pattern:
1
2 3
4 5 6
7 8 9 10
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i, j, k=1;

    printf("\tAryan Sharma");
    printf("\n");
    
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("\t%d", k);
            k=k+1;
        }
        printf("\n\n");
    }
    return 0;
}
